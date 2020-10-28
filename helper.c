

#include <stdio.h>
#include <stdlib.h>


long int * reservarMemoria (long int n) {
	long int *mem;

	mem = (long int *)malloc (n*sizeof(long int));

	if (!mem) {
		perror ("Error al reservar memoria\n");
		exit (EXIT_FAILURE);	
	}
	return mem;
}


void llenarArray (long int * A , FILE * txt,long int n){
	register long int i;
	for (i=0;i < n ; i++){
		fscanf (txt,"%li", &A[i] );
	}
}



void imprimirArray(long int * A, long int n){
	printf("Conjunto de valores: \n");
	register int i;
	for (i=0;i < n ; i++){
		printf(" %li \n", A[i] );
	}
	printf("\n");
}


void guardarArray (long int * A , long int n , FILE * txt){
	register long int i;
	for (i=0;i < n ; i++){
		fprintf (txt, "%li \n", A[i] );
	}
	printf("ARCHIVO GUARDADO\n");
}




