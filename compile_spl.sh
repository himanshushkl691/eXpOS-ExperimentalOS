#!/bin/bash
curr=$(pwd)
cd $HOME/Desktop/myexpos/spl/spl_progs/
files=$(ls *.spl)
cd ..
for i in $files
do
	./spl spl_progs/$i
	echo "Done compiling $i..."
done
cd $curr
