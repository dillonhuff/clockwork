git config --global user.email "dillonhuff@gmail.com"
git config --global user.name "Dillon Huff"

apt-get update
apt-get install -y vim
apt-get install -y tmux

git clone https://github.com/dillonhuff/VimSetup.git
cp ./VimSetup/.vimrc ~/.vimrc
git clone https://github.com/VundleVim/Vundle.vim.git ~/.vim/bundle/Vundle.vim
vim +PluginInstall +qall

