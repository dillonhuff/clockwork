from xml.dom import minidom
import os
import re

def getNodeText(node):
  return node.data

report_path = './_x.hw.xilinx_aws-vu9p-f1_shell-v04261818_201920_2/sefss_1_opt_d/sefss_1_opt_d_accel/sefss_1_opt_d_accel/solution/syn/report'

def pipeline_depth(f):
  mydoc = minidom.parse('{0}/Extracted_bright_0_bright_ld10_bright_ld2_bright_ld6_in_to_gp_0276_ld562_s_csynth.xml'.format(report_path))
  minidom.parse('./_x.hw.xilinx_aws-vu9p-f1_shell-v04261818_201920_2/sefss_1_opt_d/sefss_1_opt_d_accel/sefss_1_opt_d_accel/solution/syn/report/Extracted_bright_0_bright_ld10_bright_ld2_bright_ld6_in_to_gp_0276_ld562_s_csynth.xml')

  # print(mydoc)

  elem = (mydoc.getElementsByTagName('PerformanceEstimates')[0].getElementsByTagName('SummaryOfLoopLatency')[0].getElementsByTagName('Loop1')[0].getElementsByTagName('PipelineDepth')[0])

  # print(elem.toprettyxml())

  assert(len(elem.childNodes) == 1)

  depth = int(elem.childNodes[0].data)
  return depth

pipeline_depth_file = open('pipeline_depths.txt', 'w')
for f in os.listdir(report_path):
  if f.endswith('_csynth.xml'):
    print(f)
    print('\tPipeline depth: {0}'.format(pipeline_depth(f)))
    pipeline_depth_file.write('{0},{1}\n'.format(re.sub('_csynth.xml$', '', f), pipeline_depth(f)))

pipeline_depth_file.close()


