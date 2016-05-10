#ifndef __cola
#define __cola
#include <bits/stdc++.h>

class cola {
  private:
   //// Clase local de nodo para la cola:
   class Nodo {
     public:
      // Constructor:
      Nodo(const int dat) :
        data(dat), next(NULL) {}
      // Miembros:
      int data;
      Nodo *next;
   };

   // Atributos de la clase capacidad, tamaño y punteros:
   Nodo *start;
   Nodo *endcol;
   int n;
   int s;

  public:
   // Constructor y destructor b�sicos:
   cola(const int x) :
   n(x), start(NULL), s(0), endcol(NULL) {}

   ~cola();
   // Insertar en la cola:
   void encolar(const int dat);
   // Borrar un elemento de la cola:
   void desencolar();

   void print();
   bool full();
   bool vacia();

  private:
   // Funciones auxiliares
   void borrar(Nodo* &);
};

#endif//fin __cola
