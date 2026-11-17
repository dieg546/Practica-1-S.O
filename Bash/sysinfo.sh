#!/bin/bash

#Script Realizado por: 
#Diego Sanchez 27.311.730
#Leiver Garcia 28.131.245

ruta_actual=$(pwd)
user=$USER
procesador=$(lscpu | grep "Nombre del modelo" | cut -d ":" -f 2| xargs)
memoria=$(free -h | awk '/^Mem:/ {print $2}')
cantidad_archivos=$(ls -1 | wc -l)

echo "
	Nombre de la ruta actual: $ruta_actual
	Usuario actual: $user
	Cantidad de Memoria: $memoria
	Procesador: $procesador
	Cantidad de archivos en el directorio: $cantidad_archivos
	
" > info.txt

echo "Escritura exitosa"
