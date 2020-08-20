## install the aha wrapper script
#pip install -e .

## pull docker image from docker hub (this takes a while!)
#docker pull stanfordaha/garnet:latest

## run the container in the background and delete it when it exits
## (this will print out the name of the container to attach to)
#aha docker

## you can also do the following instead, but using the wrapper shim is
## suggested as it will do things like mount /cad automatically when 
## detected
## docker run -d -it --rm stanfordaha/garnet bash

## attach to the container name printed out above
#docker attach <container-name>

# load required simulator (ncsim)
module load incisive

rm -rf ast_tools/
git clone https://github.com/jack-melchert/ast_tools.git
cd ast_tools/
pip install -e .
cd ../

git clone https://github.com/jack-melchert/peak_generator.git
cd peak_generator/
pip install -e .
cd ../

cd garnet/
git fetch
git checkout dse-cgra-without-lassen
cd ../

# run a small regression suite
aha regress pr

