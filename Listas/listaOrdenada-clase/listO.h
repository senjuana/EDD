#ifndef __lista
#define __lista
#include <bits/stdc++.h>

class lista {
  private:
   //// Clase local de nodo para la lista:
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
   lista(const int x);
   ~lista();
   // Insertar en la lista:
   void inser(const int dat);
   // Borrar un elemento de la lista:
   void del(const int dat);

   void print();
   bool full();
   bool vacia();

  private:
   // Funciones auxiliares
   void borrar(Nodo* &);
};

#endif//fin __lista

