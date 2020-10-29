/*
	@brief helper.h

*/

#ifndef HELPER_H
#define HELPER_H

/*
NOMBRE: reservarMemoria
Descripción: 
	Funcion encargada de crear un arreglo dinamico de tamaño n, de tipos de datos long int
Recibe: 
	long int n: Tamaño del arreglo a crear
Devuelve: 
	Apuntador al primer elemento del arreglo, tipo de dato long int 
*/
long int * reservarMemoria (long int n);




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
void llenarArray (long int * A , FILE * txt,long int n);





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
void imprimirArray(long int * A, long int n);





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
void guardarArray (long int * A, long int n,  FILE * txt);

#endif