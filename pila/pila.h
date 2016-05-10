#ifndef __pila
#define __pila
#include <bits/stdc++.h>

class pila {
  private:
   //// Clase local de nodo para la pila:
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
   int n;
   int s;

  public:
   // Constructor y destructor b�sicos:
   pila(const int x) :
   n(x), start(NULL), s(0) {}

   ~pila();
   // Insertar en la pila:
   void push(const int dat);
   // Borrar un elemento de la pila:
   void pop();

   void top();
   bool full();
   bool vacia();

  private:
   // Funciones auxiliares
   void borrar(Nodo* &);
};

#endif//fin __pila
