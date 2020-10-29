
struct nodo{//Estructura de la conformación de los nodos
    long int dato;
    struct nodo *hijoIzq;
    struct nodo *hijoDer;
};

struct arbolBB{//Nodo arbol, este será la raíz
    struct nodo *raiz;
};

//Declaración de las operaciones del arbol 
struct arbolBB *crearABB();
struct nodo *crearNodo(long int dato);
void insertar(struct arbolBB *arbol, long int dato);
void guardarRecorridoInorden(struct arbolBB *arbol, long int *A, long int n);