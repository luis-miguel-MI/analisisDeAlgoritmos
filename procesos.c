

#include <stdio.h>
#include <stdlib.h>
#include "algoritmos.h"
#include "helper.h"
#include "tiempo.h"


void procesamiento (int algoritmo, long int * numeros , long int n ) {

	double utime0, stime0, wtime0,utime1, stime1, wtime1;

	switch (algoritmo) 
	{
		case 1:
			printf("Iniciando ordenamiento por: BURBUJA\n");
			
			uswtime(&utime0, &stime0, &wtime0);

			burbuja (numeros,n);
			
			uswtime(&utime1, &stime1, &wtime1);

		break;

		case 2:
			printf("Iniciando ordenamiento por: BURBUJA OPTIMIZADA\n");

			uswtime(&utime0, &stime0, &wtime0);

			burbujaOptimizada (numeros,n);

			uswtime(&utime1, &stime1, &wtime1);

		break;

		case 3:
			printf("Iniciando ordenamiento por: INSERICIÓN\n");
			
			uswtime(&utime0, &stime0, &wtime0);

			insercion (numeros,n);

			uswtime(&utime1, &stime1, &wtime1);

		break;

		case 4:
			printf("Iniciando ordenamiento por: SELECCION\n");
			
			uswtime(&utime0, &stime0, &wtime0);

			seleccion (numeros,n);

			uswtime(&utime1, &stime1, &wtime1);

		break;

		case 5:
			printf("Iniciando ordenamiento por: SHELL SORT\n");
			
			uswtime(&utime0, &stime0, &wtime0);

			shellSort (numeros,n);

			uswtime(&utime1, &stime1, &wtime1);

		break;

		case 6:
			printf("Iniciando ordenamiento por: BURBUJA\n");
			
			uswtime(&utime0, &stime0, &wtime0);

			printf("Aqui estaria el arbol binario... si tuviera uno jaja\n");
			//arbolBinario (numeros,n);
			uswtime(&utime1, &stime1, &wtime1);

		break;
	}

	printf("ORDENAMIENTO FINALIZADO\n");
	//Cálculo del tiempo de ejecución del programa
	printf("\n");
	printf("real (Tiempo total)  %.10f s\n",  wtime1 - wtime0);
	printf("user (Tiempo de procesamiento en CPU) %.10f s\n",  utime1 - utime0);
	printf("sys (Tiempo en acciónes de E/S)  %.10f s\n",  stime1 - stime0);
	printf("CPU/Wall   %.10f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
	printf("\n");
	
	//Mostrar los tiempos en formato exponecial
	printf("\n");
	printf("real (Tiempo total)  %.10e s\n",  wtime1 - wtime0);
	printf("user (Tiempo de procesamiento en CPU) %.10e s\n",  utime1 - utime0);
	printf("sys (Tiempo en acciónes de E/S)  %.10e s\n",  stime1 - stime0);
	printf("CPU/Wall   %.10f %% \n",100.0 * (utime1 - utime0 + stime1 - stime0) / (wtime1 - wtime0));
	printf("\n");

}


