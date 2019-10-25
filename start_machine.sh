#!/bin/bash
curr=$(pwd)
cd $HOME/Desktop/myexpos/xsm
if [ -z $1 ]
then
	./xsm
else
	./xsm --timer $1
fi
cd $curr
