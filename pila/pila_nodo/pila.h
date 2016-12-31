#ifndef __pila
#define __pila

template < class T > class pila {
  	private:
	typedef struct snode{
		T data;
		struct snode *next;
	}Nodo;
   	// Atributos de la clase capacidad, tamaño y punteros:
   	Nodo *start;
   	int n;
   	int s;
   	//metodos auxiliares
	void borrar( Nodo *p); 
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

#include "imple_pila.tpp"
#endif  //fin __pila

