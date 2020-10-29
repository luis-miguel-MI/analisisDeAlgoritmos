#!/bin/bash


#Variables del script 
algoritmo = $1
archivoSalida = $2 
make

echo "COMENZANDO SCRIPT"

./practica1 10 $1 > $2
./practica1 100 $1 >> $2
./practica1 2000 $1 >> $2
./practica1 8000 $1 >> $2
./practica1 10000 $1 >> $2
./practica1 15000 $1 >> $2 

echo "SCRIPT FINALIZADO --RESPALDAR EL ARCHIVO ANTES DE VOLVER A EJECUTAR EL SCRIPT-- "
