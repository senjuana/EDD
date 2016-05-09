#ifndef __lista_
#define __lista_
#ifndef _Nodo
#define _Nodo

class lista{
    class Nodo{
    public:
        int data;
        Nodo *next;

        int getdata();
        Nodo *crearnodo(int);
    };
    public:
        int n;
        int s;
        static Nodo *start;
        //constructor
        lista(int);
        ~lista();

    friend void print(lista);

    void init (lista,int);
    bool vacio(lista);
    bool full(lista);

    int del(lista,int);
    void inser (lista, int);
};
extern void print(lista);

#endif
#endif
