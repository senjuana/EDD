#ifndef Arbol
#define Arbol

typedef struct snode{
    int data;
    struct snode *left;
    struct snode *right;
}nodo;

typedef struct{
    nodo *start;
    nodo *eizq;
    nodo *eder;
}Arbol;

void init(Arbol &,int);
bool vacio(Arbol &);
void inser(Arbol &lista, int x);
void print(Arbol &);
nodo *crearnodo(int);

#endif
