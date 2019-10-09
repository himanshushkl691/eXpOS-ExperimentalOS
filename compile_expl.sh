#!/bin/bash
curr=$(pwd)
cd $HOME/Desktop/myexpos/expl/sample/
files=$(ls *.expl)
cd ..
for i in $files
do
	./expl sample/$i
	echo "Done compiling $i..."
done
cd $curr
