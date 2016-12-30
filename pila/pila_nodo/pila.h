#ifndef __pila
#define __pila
#include <bits/stdc++.h>

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



//Impĺementacion
template < class T > pila< T >::pila( int capa ){
	start = NULL;
	n = capa;
	s = 0;
}

template < class T > bool pila< T >::push( const T &x ){
  	Nodo *aux = new Nodo;
	aux->data = x;
	if(!isFull()){
		aux->next = start;
		start = aux;
		s++;
		return true;
	}
	return false;
}


template < class T > bool pila< T >::pop(){
    if(!isEmpty()){
    	Nodo *p;
    	p = start;
    	start = start->next;
    	delete p;
    	s--;
	return true;
    }
    return false;
}

template < class T > void pila< T >::borrar( Nodo *p ){
    Nodo *q;
    while(p!=NULL){
       q = p;
       p = p->next;
       delete q;
    }
}

template < class T > bool pila< T >::top( T &x ){
	if(!isEmpty()){
		x = start->data;
		return true;
	}
	return false;
}




template < class T > pila< T >::~pila(){borrar(start);}

template < class T > bool pila< T >::isFull(){ return s==n;}
template < class T > bool pila< T >::isEmpty(){ return s==0;}



#endif//fin __pila
