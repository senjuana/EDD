#ifndef __cola
#define __cola
#include <bits/stdc++.h>

class cola {
  private:
   //// Clase local de nodo para la cola:
   class Nodo {
     public:
      // Constructor:
      Nodo(const int dat, const char C) :
        id(dat),prioridad (C),next(NULL) {}
      // Miembros:
      int id;
      char prioridad;
      Nodo *next;
   };

   // Atributos de la clase capacidad, tamaño y punteros:
   Nodo *start;
   Nodo *endcol;
   int n;
   int s;

  public:
   // Constructor y destructor :
   cola(const int x) :
   n(x), start(NULL), s(0), endcol(NULL) {}

   ~cola();
   // Insertar en la cola:
   bool encolar(const int dat, char c);
   // Borrar un elemento de la cola:
   bool desencolar();

   void print();
   bool full();
   bool vacia();

  private:
   // Funciones auxiliares
   void borrar(Nodo* &);
};

#endif//fin __cola
