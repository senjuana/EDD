#ifndef __list
#define __list
#include <bits/stdc++.h>

class list {
  private:
   //// Clase local de nodo para la list:
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
   list(const int x) :
   n(x), start(NULL), s(0) {}

   ~list();
   // Insertar en la list:
   void inser(const int dat);
   // Borrar un elemento de la list:
   void del();

   void print();
   bool full();
   bool vacia();

  private:
   // Funciones auxiliares
   void borrar(Nodo* &);
};

#endif//fin __list
