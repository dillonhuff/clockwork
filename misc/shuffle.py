import json, sys
import os.path as path
import numpy as np
import scipy.io
import functools, operator

def index2vector(ind, extends)->list:
    ret = []
    for ext in extends:
        ret.append(ind % ext)
        ind = ind // ext
    return ret

#input_file = "../aha_garnet_design_new/resnet3_1/resnet3_1_garnet.json"
assert len(sys.argv) == 2, "python shuffer.py coreir.json"
input_file = sys.argv[1]
#input_file = "../aha_garnet_design_new/resnet_init_unroll_tile/resnet_init_unroll_tile_garnet.json"
with open(input_file) as f:
    data = json.load(f)
    val_list = (data["top"]).split(".")
    print(val_list)
    for ins_name, val in (data["namespaces"][val_list[0]]["modules"][val_list[1]]["instances"]).items():
        if "genref" not in val.keys():
            continue
        if val["genref"] == "cgralib.IO":
            #print (val["metadata"])
            io_config = (next(iter(val["metadata"])))
            glb_config = val["metadata"][io_config]
            ext = glb_config["extent"]
            stride_key = "_data_stride"
            if "in2glb" in io_config:
                stride_key = "write" + stride_key
            elif "glb2out" in io_config:
                stride_key = "read" + stride_key
            else:
                assert(False)
            stride = glb_config[stride_key]
            compressed_ext = []
            compressed_stride = []
            compressed_new_stride= []

            #Find the zero stride dim
            zero_dim = -1
            for idx, s in enumerate(stride):
                if (s == 0):
                    assert(zero_dim == -1)
                    zero_dim = idx
            #print (zero_dim)
            new_stride = [0 for _ in stride]
            accumulate_stride = 1
            dim_left = len(stride)
            if (zero_dim == -1):
                zero_dim = 0
            else:
                new_stride[zero_dim] = 0
                zero_dim = zero_dim + 1
                dim_left = dim_left - 1
            for dim in range(zero_dim, dim_left + zero_dim, 1):
                wrap_dim = dim % len(stride)
                new_stride[wrap_dim] = accumulate_stride
                accumulate_stride = accumulate_stride * ext[wrap_dim]
            print ("\n\nFound IO instance name: ", ins_name)
            print("new stride: ", new_stride)

            # get the image size
            for idx, s in enumerate(stride):
                if s != 0:
                    compressed_ext.append(ext[idx])
                    compressed_stride.append(s)
                    compressed_new_stride.append(new_stride[idx])
            img_size = functools.reduce(operator.mul, compressed_ext)
            compressed_ext = np.asarray(compressed_ext)
            compressed_stride = np.asarray(compressed_stride)
            compressed_new_stride= np.asarray(compressed_new_stride)
            print ("\timage size: ", img_size)
            print("\tcompressed ext: ", compressed_ext)
            print("\tcompressed stride: ", compressed_stride)
            print("\tcompressed new stride: ", compressed_new_stride)

            #create a dummy data now
            #TODO: should use a json file to save the input name
            def get_img_name(ins_name):
              if "input" in ins_name:
                  return "input_padded"
                  #assert(path.exists("input_padded.mat"))
                  #data_org = scipy.io.loadmat("input_padded.mat")["input_padded"]
                  #data_org = np.random.randint(-128, 128, 58*58*16)
              elif "kernel" in ins_name:
                  return "kernel"
                  #assert(path.exists("kernel.mat"))
                  #data_org = scipy.io.loadmat("kernel.mat")["kernel"]
                  #data_org = np.random.randint(-128, 128, 16*64*9)
              elif "output" in ins_name:
                  return "output_cpu"
                  #assert(path.exists("output_cpu.mat"))
                  #data_org = scipy.io.loadmat("output_cpu.mat")["output_cpu"]
                  #data_org = np.random.randint(-128, 128, 28*28*64)
              else:
                  assert(False)

            img_file_name = get_img_name(ins_name)
            assert(path.exists(img_file_name+".mat") )
            data_org = scipy.io.loadmat(img_file_name + ".mat")[img_file_name]
            print ("load halide generated image, with size =", data_org.shape)
            data_org = data_org.flatten('F')
            print ("After Flatten Fortran style size =", data_org.shape)

            #Create the reordered array
            data_shuffle = np.zeros(img_size, dtype=np.int8)

            #sanity check set
            access_addr_set = set({})
            save_addr_set = set({})

            #copy the old data into new data
            for idx in range(img_size):
                nd_idx = np.asarray(index2vector(idx, compressed_ext))
                origin_addr = nd_idx.dot(compressed_stride)
                new_addr = nd_idx.dot(compressed_new_stride)
                print(f"\tDEBUG: read {nd_idx} from {origin_addr} into {new_addr}")
                if (origin_addr in access_addr_set):
                    print(f"\t\t DEBUG: reuse address {origin_addr}, iter domain: {nd_idx}" )
                access_addr_set.add(origin_addr)
                assert(new_addr not in save_addr_set)
                save_addr_set.add(new_addr)
                #print("org addr:", origin_addr, "\tnew addr:", new_addr)
                data_shuffle[new_addr] = data_org[origin_addr]

            def sanity_check_all_addr_visit(img_size, addr_set):
                for addr in range(img_size):
                    assert(addr in addr_set)

            print(f"data_org size: {data_org.size}")
            print(f"data_shufflesize: {data_shuffle.size}")
            sanity_check_all_addr_visit(data_org.size, access_addr_set)
            sanity_check_all_addr_visit(data_shuffle.size, save_addr_set)

            #save new file
            scipy.io.savemat(img_file_name + "_shuffle.mat", {img_file_name: data_shuffle})
            print ("SAVE reordered image into ",img_file_name + "_shuffle.mat!\n")
            data_shuffle.astype('int16').tofile(img_file_name + '_shuffle.raw')
            print ("SAVE reordered image into ",img_file_name + "_shuffle.raw!\n")

            #optimize the level of iteration ?
            print ("\tnew stride: \t", new_stride)
            print ("\torigin stride: \t", stride)
            print ("\textend: \t", ext)
            print ("\tcycle stride: \t", glb_config["cycle_stride"])


            def merge_stride_and_add2json(ext, stride, glb_config):
                cycle_stride = glb_config["cycle_stride"]
                def get_possible_merge_dim(ext, stride):
                    merge_list = [] #list of dimension that can merge with its upper dimension
                    assert(len(stride) == len(ext))
                    for i in range(len(stride)-1):
                        if (stride[i]*ext[i] == stride[i+1]):
                            merge_list.append(i)
                    return merge_list

                addr_stride_merge_dims = get_possible_merge_dim(ext, stride)
                sched_stride_merge_dims = get_possible_merge_dim(ext, cycle_stride)

                def merge_stride(ext, stride, dim):
                    new_stride = []
                    new_ext = []
                    for idx, (e, s) in enumerate(zip(ext, stride)):
                        if (idx == dim):
                            new_stride.append(s)
                            new_ext.append(e* ext[idx+1])
                        elif (idx == dim + 1):
                            continue
                        else:
                            new_stride.append(s)
                            new_ext.append(e)
                    return new_ext, new_stride
                new_addr_ext = ext[:]
                new_sched_ext = ext[:]
                new_addr_stride = new_stride[:]
                new_sched_stride = cycle_stride[:]
                for dim in reversed(addr_stride_merge_dims):
                    new_addr_ext, new_addr_stride = merge_stride(new_addr_ext, new_addr_stride, dim)
                for dim in reversed(sched_stride_merge_dims):
                    new_sched_ext, new_sched_stride = merge_stride(new_sched_ext, new_sched_stride, dim)

                glb_config[stride_key] = new_stride

                #print (addr_stride_merge_dims)
                #print (sched_stride_merge_dims)
                print ("====Merge Access Pattern to Fit GLB Controller===")
                print ("\tnew_addr_stride:\t", new_addr_stride)
                print ("\tnew_addr_ext:\t", new_addr_ext)
                print ("\tnew_sched_stride:\t", new_sched_stride)
                print ("\tnew_sched_ext:\t", new_sched_ext)

                glb_config["new_addr_stride"] = new_addr_stride
                glb_config["new_addr_extent"] = new_addr_ext
                glb_config["new_sched_stride"] = new_sched_stride
                glb_config["new_sched_extent"] = new_sched_ext


            merge_stride_and_add2json(ext, new_stride, glb_config)


with open('design_top_reorder.json', 'w') as out_file:
    json_data = json.dumps(data, indent=4)
    out_file.write(json_data)

print ("\nSave new coreir json into design_top_reorder.json")


