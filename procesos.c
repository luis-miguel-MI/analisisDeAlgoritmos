/*
ARCHIVO: procesos.c
	
DESCRIPCIÓN:
	Archivo donde se lleva acabo la seleccion del algoritmo a evaluar

*/


#include <stdio.h>
#include <stdlib.h>
#include "algoritmos.h"
#include "helper.h"
#include "tiempo.h"


/*
NOMBRE: procesamiento (int algoritmo, long int * numeros , long int n )
Descripción: 
	Procedimiento donde se realiza la seleccion del algoritmo a ejecutar
	y calcular su tiempo de ejecucion
Recibe: 
	int algoritmo: indica el numero de algoritmo que va a ejecutar
		>1 : 	burbuja
		>2 :	burbuja optimizada
		>3 :	Insercion
		>4 :	Selección
		>5 :	shell 
		>6 :	Arbol binario de busqueda

	long int * numeros: Apuntador al primer elemento del arreglo de numero a ordenar
	long int n: Tamaño del arreglo a evaluar 
Devuelve: N/A
*/
void procesamiento (int algoritmo, long int * numeros , long int n ) {

	double utime0, stime0, wtime0,utime1, stime1, wtime1;

	printf ("#######################################################################\n");
	printf ("#######################################################################\n\n");

	switch (algoritmo) 
	{
		case 1:
			printf("Iniciando ordenamiento por: BURBUJA de %li números\n\nORDENANDO ...\n",n);
			
			uswtime(&utime0, &stime0, &wtime0);

			burbuja (numeros,n);
			
			uswtime(&utime1, &stime1, &wtime1);

		break;

		case 2:
			printf("Iniciando ordenamiento por: BURBUJA OPTIMIZADA de %li numeros\n\nORDENANDO ...\n" ,n );

			uswtime(&utime0, &stime0, &wtime0);

			burbujaOptimizada (numeros,n);

			uswtime(&utime1, &stime1, &wtime1);

		break;

		case 3:
			printf("Iniciando ordenamiento por: INSERICIÓN de %li numeros\n\nORDENANDO ...\n" ,n );
			
			uswtime(&utime0, &stime0, &wtime0);

			insercion (numeros,n);

			uswtime(&utime1, &stime1, &wtime1);

		break;

		case 4:
			printf("Iniciando ordenamiento por: SELECCION de %li numeros\n\nORDENANDO ...\n" ,n );
			
			uswtime(&utime0, &stime0, &wtime0);

			seleccion (numeros,n);

			uswtime(&utime1, &stime1, &wtime1);

		break;

		case 5:
			printf("Iniciando ordenamiento por: SHELL SORT de %li numeros\n\nORDENANDO ...\n" ,n );
			
			uswtime(&utime0, &stime0, &wtime0);

			shellSort (numeros,n);

			uswtime(&utime1, &stime1, &wtime1);

		break;

		case 6:
			printf("Iniciando ordenamiento por: ARBOL BB de %li numeros\n\nORDENANDO ...\n" ,n );
			
			uswtime(&utime0, &stime0, &wtime0);

			ordenamientoABB (numeros,n);
			
			uswtime(&utime1, &stime1, &wtime1);

		break;
	}

	printf("\nORDENAMIENTO FINALIZADO\n");
	//Cálculo del tiempo de ejecución del programa
	printf("\nCalculo de tiempo de ejecución\n");
	printf("real (Tiempo total)  %.10f s\n",  wtime1 - wtime0);
	printf("user (Tiempo de procesamiento en CPU) %.10f s\n",  utime1 - utime0);
	printf("sys (Tiempo en acciónes de E/S)  %.10f s\n",  stime1 - stime0);
	printf("CPU/Wall   %.10f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
	printf("\n");
	
	//Mostrar los tiempos en formato exponecial
	printf("\nCalculo de tiempo de ejecución en forma exponencial\n");
	printf("real (Tiempo total)  %.10e s\n",  wtime1 - wtime0);
	printf("user (Tiempo de procesamiento en CPU) %.10e s\n",  utime1 - utime0);
	printf("sys (Tiempo en acciónes de E/S)  %.10e s\n",  stime1 - stime0);
	printf("CPU/Wall   %.10f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
	printf("\n\n");
	printf ("#######################################################################\n");
	printf ("-----------------------------------------------------------------------\n");
	printf ("#######################################################################\n\n\n");

}


