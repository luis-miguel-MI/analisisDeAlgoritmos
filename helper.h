/*
	@brief helper.h

*/

#ifndef HELPER_H
#define HELPER_H

long int * reservarMemoria (long int n);
void llenarArray (long int * A , FILE * txt,long int n);
void imprimirArray(long int * A, long int n);
void guardarArray (long int * A, long int n,  FILE * txt);

#endif