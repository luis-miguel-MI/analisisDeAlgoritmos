//Metodo burbuja
#include <stdio.h>
#include <conio.h>

int main(){
	int i,j,aux,n;
	
	printf("Ingrese el numero de elementos:");
	scanf("%i",&n);
	
	int A[n];
	
	printf("Ingrese los valores del arreglo:\n");
	for(i=0;i<n;i++){
		scanf("%i",&A[i]);
	}
	
	for(i=0;i<=(n-2);i++){ //Este arreglo parte desde 0 hasta el numero de elementos en el array
		for(j=0;j<=((n-2)-i);j++){
			if(A[j]>A[j+1]){
				aux=A[j];
				A[j]=A[j+1];
				A[j+1]=aux;
			}
		}	
	}
	
	//Arreglo en forma ascendente
	printf("\nEl arreglo en orden ascendente es: ");
	for(i=0;i<n;i++){
		printf("%i ",A[i]);
	}
	
	//Arreglo en forma descendente
	printf("\nEl arreglo en orden ascendente es: ");
	for(i=n-1;i>=0;i--){
		printf("%i ",A[i]);
	}
	
	return 0;
}