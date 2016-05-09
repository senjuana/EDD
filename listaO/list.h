#ifndef __lista_
#define __lista_
#ifndef _Nodo
#define _Nodo

class lista{
    typedef struct snode{
        int data;
        struct snode *next;
    }Nodo;

    public:
        int n;
        int s;
        Nodo *start;
        //constructor
        lista(int);
        ~lista();
        void print();
        Nodo *crearnodo(int);
        bool vacio();
        bool full();

        bool del(int);
        bool inser(int);

};

#endif
#endif

