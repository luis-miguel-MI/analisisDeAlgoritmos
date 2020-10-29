/*
ARCHIVO: algoritmos.c
	
DESCRIPCIÓN:
	Archivo donde se encuentran los algoritmos para 
	llevar acabo el ordenamiento de los numeros.
*/


#include <stdio.h>
#include <stdlib.h>
#include "arbolBB.h"




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
void burbuja (long int * A, long int n ){
	long int  aux;
	register long int i=0,j=0;

	for(i=0;i<=(n-2);i++){ 
		for(j=0;j<=((n-2)-i);j++){
			if(A[j]>A[j+1]){
				aux=A[j];
				A[j]=A[j+1];
				A[j+1]=aux;
			}
		}	
	}

}



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
void burbujaOptimizada(long int * A, long int n) {
	long int cambios = 1, aux;
	register long int i=0,j=0;

	while (i<n-1 && cambios != 0 ) {
		cambios=0;
		for ( j=0 ; j < (n-1)-i ; j++ ){
			if ( A[j] > A[j+1] ){
				aux=A[j];
				A[j]=A[j+1];
				A[j+1]=aux;
				cambios=1;
			}
		}
		i=i+1;
	}

}


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
void insercion (long int *A, long int n){
	
	long int  temp;
	register long int i=0,j;	

	for(i=0;i<=(n-1);i++){ 
		j=i;
		temp=A[i];
			while((j>0)&&(temp<A[j-1])){
				A[j]=A[j-1];
				j--;
			}	
		A[j]=temp;		
	}
}


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
void seleccion (long int * A, long int n) {
	long int  aux;
	register long int i=0,k,p=0;
	for(k=0;k<=(n-2);k++){
		p=k;
		for(i=k+1;i<=(n-1);i++){
			if(A[i]<A[p]){
				p = i;
			}
		}
		aux = A[k];
		A[k] = A[p];
		A[p] = aux;
	}
}



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
void shellSort(long int *array,long int n) {

	register long int intervalo,i,j;
	long int temp;
    
    for ( intervalo = n / 2; intervalo > 0; intervalo /= 2)
    {
        for ( i = intervalo; i < n; i += 1)
        {
             temp = array[i];
            for (j = i; j >= intervalo && array[j - intervalo] > temp; j -= intervalo)
            {
                array[j] = array[j - intervalo];
            }
            array[j] = temp;
        }
    }
}



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
void ordenamientoABB (long int *A, long int n) {

	struct arbolBB *arbol = crearABB();
	register long int i;

	for (i=0 ; i<n ; i++) {
		insertar (arbol, A[i]);
	}

	guardarRecorridoInorden (arbol, A , n );

	free (arbol);
}





