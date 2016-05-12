#ifndef __grafo
#define __grafo
#include <bits/stdc++.h>

class grafo {
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
   int n;
   bool *E = new bool [n*(n-1)/2];

  public:
   // Constructor y destructor b�sicos:
   cola(const int x) :
   n(x) {}

   ~cola();
   // Insertar en la cola:
   bool buscE(const int n, const int j);
   // Borrar un elemento de la cola:
   void llenarE();

  private:
   // Funciones auxiliares
   void borrar(Nodo* &);
};






#endif // __grafo
