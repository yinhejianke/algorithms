#!/usr/bin/env bash

mv ~/.vim ~/.vim.orig
mv ~/.vimrc ~/.vimrc.orig
git clone git://github.com/humiaozuzu/dot-vimrc.git ~/.vim
ln -s ~/.vim/vimrc ~/.vimrc
git clone https://github.com/gmarik/vundle.git ~/.vim/bundle/vundle
