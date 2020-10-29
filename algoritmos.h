/*
	@brief algoritmos.h

*/

#ifndef ALGORITMOS_H
#define ALGORITMOS_H


/*
NOMBRE: burbuja (long int * A, long int n )
Descripción: 
	Algoritmo de ordenamiento burbuja, ordena numeros del arreglo A y los coloca 
	en el mismo arreglo
Recibe: 
	long int * A: Apuntador al primer elemento del arreglo de numeros a ordenar
	long int n: Numero de lementos a ordenar
Devuelve: N/A
*/
void burbuja (long int * A, long int n );




/*
NOMBRE: burbujaOptimizada (long int * A, long int n )
Descripción: 
	Algoritmo de ordenamiento burbujaOptimizada, ordena numeros del arreglo A y los coloca 
	en el mismo arreglo
Recibe: 
	long int * A: Apuntador al primer elemento del arreglo de numeros a ordenar
	long int n: Numero de elementos a ordenar
Devuelve: N/A
*/
void burbujaOptimizada(long int * A, long int n);




/*
NOMBRE: insercion (long int * A, long int n )
Descripción: 
	Algoritmo de ordenamiento insercion, ordena numeros del arreglo A y los coloca 
	en el mismo arreglo
Recibe: 
	long int * A: Apuntador al primer elemento del arreglo de numeros a ordenar
	long int n: Numero de elementos a ordenar
Devuelve: N/A
*/
void insercion (long int *A, long int n);




/*
NOMBRE: seleccion (long int * A, long int n )
Descripción: 
	Algoritmo de ordenseleccion burbuja, ordena numeros del arreglo A y los coloca 
	en el mismo arreglo
Recibe: 
	long int * A: Apuntador al primer elemento del arreglo de numeros a ordenar
	long int n: Numero de elementos a ordenar
Devuelve: N/A
*/
void seleccion (long int * A, long int n);






/*
NOMBRE: shellSort (long int * A, long int n )
Descripción: 
	Algoritmo de ordenamiento shelSort, ordena numeros del arreglo A y los coloca 
	en el mismo arreglo
Recibe: 
	long int * A: Apuntador al primer elemento del arreglo de numeros a ordenar
	long int n: Numero de elementos a ordenar
Devuelve: N/A
*/
void shellSort(long int *array,long int n);






/*
NOMBRE: ordenamientoABB (long int * A, long int n )
Descripción: 
	Algoritmo de ordenamiento con un arbol binario de busqueda, ordena numeros del arreglo A y los coloca 
	en el mismo arreglo
Recibe: 
	long int * A: Apuntador al primer elemento del arreglo de numeros a ordenar
	long int n: Numero de elementos a ordenar
Devuelve: N/A
*/
void ordenamientoABB (long int *A, long int n);

#endif
