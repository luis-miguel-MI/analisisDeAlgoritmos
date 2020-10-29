#include <stdlib.h>
#include "arbolBB.h"


struct arbolBB *crearABB(){//Se crea el nuevo árbol que apuntará a la raíz, esto es para no "ensuciar la raíz"
    struct arbolBB *newArbol = (struct arbolBB *)malloc(sizeof(struct arbolBB));
    newArbol->raiz = NULL;

    return newArbol;
}


struct nodo *crearNodo(long int dato){//Creamos un nuevo nodo y conectamos cada parte de el, dato a dato, Izq a NULL y Der a NULL
    struct nodo *newNodo = (struct nodo *)malloc(sizeof(struct nodo));
    newNodo->dato = dato;
    newNodo->hijoIzq = NULL;
    newNodo->hijoDer = NULL;

    return newNodo;
}


void insertar(struct arbolBB *arbol, long int dato){
    struct nodo *x = arbol->raiz; //Nuevo nodo x que tomara la posicion de la raiz
    struct nodo *y = NULL;//Nuevo nodo y que apunta a NULL
    struct nodo *newNodo = crearNodo(dato);//Creamos el nuevo nodo
    while(x != NULL){//Si es null ya estamos en la raiz, por eso haremos lo siguiente mientras no lo es
        y = x;//Conectamos y a la raíz
        if(newNodo->dato < x->dato)//Si el dato que esta en newNodo es menor que el que esta en la raiz, entonces se pone a la izquierda
            x = x->hijoIzq;
        else
            x = x->hijoDer;//De lo contrario el dato es mayor y se va a la derecha
    }
    if(y == NULL)//Si Y no se conecto a la raíz, aquí lo conectamos
    {
        arbol->raiz = newNodo;
    }
    else if(newNodo->dato < y->dato)//Si ya esta conectado, hacemos lo mismo que en x
    {
        y->hijoIzq = newNodo;
    }
    else
    {
        y->hijoDer = newNodo;
    }
    
}
void guardarRecorridoInorden(struct arbolBB *arbol, long int *A, long int n){
    struct nodo *actual; 
    struct nodo *pre; 
    long int i = 0; 
    if(arbol->raiz == NULL)
        return;
    
    actual = arbol->raiz;
    while(actual != NULL && i < n){
        if(actual->hijoIzq == NULL){
            A[i] = actual->dato;//Copia el dato del nodo al arreglo
            i++;
            actual = actual->hijoDer;
        }
        else{
            pre = actual->hijoIzq;
            while(pre->hijoDer != NULL && pre->hijoDer != actual)
                pre = pre->hijoDer;
            if(pre -> hijoDer == NULL){
                pre->hijoDer = actual;
                actual = actual->hijoIzq;
            }
            else{
                pre->hijoDer = NULL;
                A[i] = actual->dato;
                i++;
                actual = actual->hijoDer;
            }
        }
    }

}