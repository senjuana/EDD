#ifndef __EList_
#define __EList_

typedef struct snode{
    int prioridad;
    int tiempo;
    char p;
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
void inser(EList &lista, int x, int y,char c);
void print(EList &);
void proceso(EList &);
int prome(EList &lista);
void reacomodo(EList &lista);
nodo *crearnodo(char,int,int);
#endif
