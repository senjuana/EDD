#ifndef __EList_
#define __EList_

typedef struct snode{
    int data;
    struct snode *next;
}nodo;

typedef struct{
    nodo *start;
    int n;
    int s;
}EList;

void init(EList &,int);
bool vacio(EList &);
bool llena(EList &);
bool del(EList &lista,int x);
void inser(EList &lista, int x);
void print(EList &);

nodo *crearnodo(int);
#endif
