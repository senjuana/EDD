#ifndef _prio
#define _prio

typedef struct snode{
    int tiempo;
    int prioridad;
    char nom;
    struct snode *next;
}nodo;

typedef struct{
    nodo *start;
    int n;
    int s;
}prio;

void init(prio &,int);
bool vacio(prio &);
bool llena(prio &);
bool del(prio &,int x);
void inser(prio &, int x);
void print(prio &);

nodo *crearnodo(int);



#endif // _prio
