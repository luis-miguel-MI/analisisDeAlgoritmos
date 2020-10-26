//Metodo por insercion
#include <stdio.h>
#include <conio.h>

int main(){
	int i=0,j,temp,n;
	
	printf("Ingrese el numero de elementos:");
	scanf("%i",&n);
	
	int A[n];
	
	printf("Ingrese los valores del arreglo:\n");
	for(i=0;i<n;i++){
		scanf("%i",&A[i]);
	}

	i=0;
	for(i=0;i<=(n-1);i++){ //Este arreglo parte desde 0 hasta el numero de elementos en el array
		j=i;
		temp=A[i];
			while((j>0)&&(temp<A[j-1])){
				A[j]=A[j-1];
				j--;
			}	
			A[j]=temp;		
	}
	
	//Arreglo en forma ascendente
	printf("\nEl arreglo en orden ascendente es: ");
	for(i=0;i<n;i++){
		printf("%i ",A[i]);
	}
	
	//Arreglo en forma descendente
	printf("\nEl arreglo en orden descendente es: ");
	for(i=n-1;i>=0;i--){
		printf("%i ",A[i]);
	}
	
	getch();
	return 0;
}
