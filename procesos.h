/*
	@brief procesos.h

*/

#ifndef PROCESOS_H
#define PROCESOS_H


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
void procesamiento (int algoritmo, long int * numeros , long int n ); 

#endif
