/*

	ARCHIVO main

ARCHIVO: practica1.c
	
ANALISIS DE ALGORITMOS 
ESCOM - IPN

PRACTICA 1: PRUEBAS A POSTERIORI (ALGORITMOS DE ORDENAMIENTO)

ALUMNOS: 
	Muñoz Islas Luis Miguel
	Pastrana Torres Victor Norberto
	Pizaña Cenedo Erick Alberto

OBJETIVO:
Realizar un analisis de  algoritmos de ordenamiento mas conocidos 
en la computación y realizar una aproximación a sus funciones 
de complejidad temporal

Uso 
./practica1 <numero de elementos> <numero de algoritmo>

	numero de elementos: numero de elementos a ordenar

	numero de algoritmo:
	indica el numero de algoritmo que va a ordenar los numeros
		>1 : 	burbuja
		>2 :	burbuja optimizada
		>3 :	Insercion
		>4 :	Selección
		>5 :	shell 
		>6 :	Arbol binario de busqueda
Ejemplo:
	./practica1 1000 1

NOTAS: 
El archivo a donde se encuentran los numeros a evaluar debe estar en la 
misma carpeta y debe contar con permisos de lectura, modificar el nombre del 
archivo en la linea indicada.

Si se quiere imprimir el arreglo de numero ordenados descomentar la linea indicada

En caso de querer guardar el arreglo ordenado en un archivo descomentar la linea indicada

*/


#include <stdio.h>
#include <stdlib.h>
#include "helper.h"
#include "procesos.h"



int main (int argc, char ** argv) {
	
	FILE *txt;
	FILE *txtSalida;
	long int n;
	n=atol(argv[1]);
	long int * numeros;
	
	//Obtener el numero de algoritmo a ejecutar
	int algoritmoIndex=atoi(argv[2]);
	if ( algoritmoIndex<1 && algoritmoIndex >6 ){
		perror ("INDICE DE ALGORITMO NO VALIDO\n");
		exit (EXIT_FAILURE); 
	}

	txt = fopen ("numeros.txt","r"); // <-------------- Colocar el nombre de los archivos para evaluar
	txtSalida = fopen ("out.txt","w");

	//Comprobar si los archivos se abrieron
	if (txt == NULL || txtSalida == NULL ) {
		perror ("ERROR AL ABRIR EL ARCHIVO\n");
		exit (EXIT_FAILURE); 
	}

	//crear arreglo de tamaño n
	numeros = reservarMemoria (n);

	//llenar arreglo de tamaño n desde el archivo 
	llenarArray(numeros, txt, n);

	//seleccionar algoritmo a evaluar
	procesamiento (algoritmoIndex,numeros,n);

	//guardar arreglos del algoritmo

	//guardarArray (numeros,n,txtSalida);  	//<----------------------Descomentar para guardar los numero en el archivo out.txt
	//imprimirArray (numeros,n);			//<----------------------Descomentar para imprimir los numeros en orden

	free (numeros);
	fclose (txt);

	return 0;
}




