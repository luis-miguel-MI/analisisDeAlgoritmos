/*
ANALISIS DE ALGORITMOS: PRACTICA 1

//Primer argumento N 
//Segundo argumento Algoritmo


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
	
	printf("PRACTICA 1: Analisis de complejidad \n TAMAÑO DE N= %ld\n",n );
	
	int algoritmoIndex=atoi(argv[2]);
	if ( algoritmoIndex<1 && algoritmoIndex >6 ){
		perror ("INDICE DE ALGORITMO NO VALIDO\n");
		exit (EXIT_FAILURE); 
	}

	txt = fopen ("../numeros.txt","r");
	txtSalida = fopen ("salida.txt","w");

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
	//guardarArray (numeros,n,txtSalida);
	//imprimirArray (numeros,n);

	free (numeros);
	fclose (txt);

	return 0;
}




