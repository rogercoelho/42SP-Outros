#!/bin/bash

if [ $# -eq 0 ];
then
echo "No existe pasta a ser criada"
else

for ARG in $*; do
    mkdir ex$ARG
done

fi
