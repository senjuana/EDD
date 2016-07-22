//
// Created by senjuana on 30/05/16.
//

#ifndef PRACTICA4_ARBOL_H
#define PRACTICA4_ARBOL_H

#include <bits/stdc++.h>

class arbol {
    class nodo{
        public:
            nodo *izq;
            nodo *der;
            nodo *padre;
            int data;
        nodo (int x, nodo*p):
            izq(NULL),der(NULL),padre(p),data(x){}
    };
    nodo *root;
    int n;
    int i;
    int s;
    int comp;

    public:
        arbol( int capa):
                n(capa),s(0),i(0),comp(0),root(NULL) {}
        ~arbol();
        int getcomp();
        void borrar( nodo *root);
        bool insertar(int x);
        bool llena();
        bool vacio();
        void inorden(int * arre,int i);
        void inordeni( nodo *root, int * arre);
        void dropdata(int *arre, int a);
        void print( );
        void prin( nodo *root);
};


#endif //PRACTICA4_ARBOL_H
