//Ordenamiento por seleccion
#include <stdio.h>
#include <conio.h>

int main(){
	int k,i,p,n,aux;
	
	printf("Ingrese el numero de elementos:");
	scanf("%i",&n);
	
	int A[n];
	
	printf("Ingrese los valores del arreglo:\n");
	for(k=0;k<n;k++){
		scanf("%i",&A[k]);
		fflush(stdin);
	}
	
	//Ordenamineto por seleccion
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
	
		//Arreglo en forma ascendente
	printf("\nEl arreglo en orden ascendente es: ");
	for(k=0;k<n;k++){
		printf("%i ",A[k]);
	}
	
	//Arreglo en forma descendente
	printf("\nEl arreglo en orden descendente es: ");
	for(k=n-1;k>=0;k--){
		printf("%i ",A[k]);
	}
	
	getch();
	return 0;
}
