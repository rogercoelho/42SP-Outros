#!/bin/bash
if [ $# -eq 0 ];
then
    echo "Sem argumentos para fornecer."
elif [ $# -eq 1 ];
then
    echo "Apenas um argumento -->" $1
    exit 0
elif [ $# -eq 2 ];
then
    echo "Apenas dois argumentos -->" $1 $2
    exit 0
elif [ $# -eq 3 ];
then
    echo "Apenas 3 argumentos -->" $1 $2 $3
    exit 0
else 
    echo "São permitido apenas 3 argumentos. Os 3 argumentos sao -->" $1 $2 $3

fi


#if [ $# -eq 0 ];
#then
#echo "Sem argumentos."
#fi
#
#for i in $1 $2 $3; do
#  echo "Posicao: $i"
#done
