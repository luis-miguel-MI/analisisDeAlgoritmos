
/*
ARCHIVO: helper.c
	
DESCRIPCIÓN:
	Funciones auxiliares para el programa, crear arreglos
	, llenar arreglos, imprimir arreglos y guardar arreglos.

*/


#include <stdio.h>
#include <stdlib.h>

/*
NOMBRE: reservarMemoria
Descripción: 
	Funcion encargada de crear un arreglo dinamico de tamaño n, de tipos de datos long int
Recibe: 
	long int n: Tamaño del arreglo a crear
Devuelve: 
	Apuntador al primer elemento del arreglo, tipo de dato long int 
*/
long int * reservarMemoria (long int n) {
	long int *mem;

	mem = (long int *)malloc (n*sizeof(long int));

	if (!mem) {
		perror ("Error al reservar memoria\n");
		exit (EXIT_FAILURE);	
	}
	return mem;
}


/*
NOMBRE: llenarArray
Descripción: 
	Funcion encargada de llenar un arreglo A de numerlos long int, desde un archiv txt
	y un numero n de elemenos
Recibe: 
	long int * A: Apuntador al primer elemento del arreglo a llenar
	FILE * txt: Apuntador a archivo donde se encuentran los datos para llenar
	long int n: Tamaño del arreglo a crear
Devuelve: 
*/
void llenarArray (long int * A , FILE * txt,long int n){
	register long int i;
	for (i=0;i < n ; i++){
		fscanf (txt,"%li", &A[i] );
	}
}


/*
NOMBRE: imprimirArray
Descripción: 
	Funcion encargada de imprmir un arreglo A de numeros long int, 
	y un numero n de elemenos
Recibe: 
	long int * A: Apuntador al primer elemento del arreglo a llenar
	long int n: Tamaño del arreglo a crear
Devuelve: 
*/
void imprimirArray(long int * A, long int n){
	printf("\nDatos del arreglo: \n");
	register int i;
	for (i=0;i < n ; i++){
		printf(" %li \n", A[i] );
	}
	printf("\n");
}


/*
NOMBRE: guardarArray
Descripción: 
	Funcion encargada de imprmir un arreglo A de numeros long int, 
	y un numero n de elemenos
Recibe: 
	long int * A: Apuntador al primer elemento del arreglo a llenar
	long int n: Tamaño del arreglo a crear
Devuelve: 
*/
void guardarArray (long int * A , long int n , FILE * txt){
	register long int i;
	for (i=0;i < n ; i++){
		fprintf (txt, "%li \n", A[i] );
	}
	printf("ARREGLO GUARDADO\n");
}




