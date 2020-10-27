#include <stdio.h>

void shellSort(int array[], int n)
{

    for (int intervalo = n / 2; intervalo > 0; intervalo /= 2)
    {
        for (int i = intervalo; i < n; i += 1)
        {
            int temp = array[i];
            int j;
            for (j = i; j >= intervalo && array[j - intervalo] > temp; j -= intervalo)
            {
                array[j] = array[j - intervalo];
            }
            array[j] = temp;
        }
    }
}

void imprimirLista(int array[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        printf("%d  ", array[i]);
    }
    printf("\n");
}

int main()
{
    int lista[] = {9, 8, 3, 7, 5, 6, 4, 1};
    int size = sizeof(lista) / sizeof(lista[0]);
    shellSort(lista, size);
    printf("Arreglo ordenado: \n");
    imprimirLista(lista, size);
}