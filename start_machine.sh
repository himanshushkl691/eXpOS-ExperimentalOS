#!/bin/bash
curr=$(pwd)
cd $HOME/Desktop/myexpos/xsm
if [ -z $2 ]
then
	if [ -z $1 ]
	then
		./xsm
	else
		./xsm --timer $1
	fi
else
	if [ -z $1 ]
	then
		./xsm --debug
	else
		./xsm --debug --timer $1
	fi
fi
cd $curr
