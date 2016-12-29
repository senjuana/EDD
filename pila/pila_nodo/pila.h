#ifndef __pila
#define __pila
#include <bits/stdc++.h>

template < class T > class pila {
  	private:
   	// Clase local de nodo para la pila:
   	template < class T > class Nodo {
     		public:
      		// Constructor:
      		Nodo(T dat) :
        	data(dat), next(NULL) {}
      		// Miembros:
      		T data;
      		Nodo< T > *next;
	};

   	// Atributos de la clase capacidad, tamaño y punteros:
   	Nodo< T > *start;
   	int n;
   	int s;
   	//metodos auxiliares
	void borrar( Nodo< T > *p) 
  	bool isFull();
	bool isEmpty();
	
	public:
   	// Constructor y destructor basicos:
   	pila(const int x);
   	~pila();
   	// Insertar en la pila:
   	bool push( const T& );
   	// Borrar un elemento de la pila:
   	bool pop();
	//regresa el elemento arriba de la pila
   	bool top( T& );
};

#endif//fin __pila
