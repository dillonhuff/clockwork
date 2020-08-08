git config --global user.email "dillonhuff@gmail.com"
git config --global user.name "Dillon Huff"

apt-get update
apt-get install -y vim
apt-get install -y tmux

git clone https://github.com/dillonhuff/VimSetup.git
cp ./VimSetup/.vimrc ~/.vimrc
git clone https://github.com/VundleVim/Vundle.vim.git ~/.vim/bundle/Vundle.vim
vim +PluginInstall +qall

cd garnet
git pull
git checkout lake_diet_dual
cd ..

cd lake
git pull
git checkout shared_range_formal
cd ..

# replace mini mapper and memory core
cp ./clockwork/misc/mini_mapper/*.py ./garnet/mini_mapper/
cp ./clockwork/misc/memory_core_magma.py ./garnet/memory_core/

