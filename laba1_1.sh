#!/bin/bash

pereimenovat(){
	file="$1"
	suffix="$2"
	base=$(basename "$file")
	name="${base%.*}"
	ext="${base##*.}"
	newname="${name}_${suffix}.${ext}"
	mv "$file" "$(dirname "$file")/$newname"
}

if [ $# -ne 2 ]; then
	echo  "Введите суффикс и папку"
	exit 1
fi

suffix=$1
dir=$2

for f in "$dir"/*; 
do
	if [ -f "$f" ]; then
		pereimenovat "$f" "$suffix"
	fi
done
