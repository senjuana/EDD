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



//Implementacion
template < class T > pila< T >::pila( int capa ){//construcctor 
	start = NULL;
	n = capa > 0 ? capa :10 ;                //se inicializa la pila con 10 como valor default
	s = 0;
}

template < class T > bool pila< T >::push( const T &x ){//metodo push para insertar un dato en la pila
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


template < class T > bool pila< T >::pop(){//el metodo pop elimina el nodo que esta en top
    if(!isEmpty()){			   // sin regresar ningun valor
    	Nodo *p;
    	p = start;
    	start = start->next;
    	delete p;
    	s--;
	return true;
    }
    return false;
}

template < class T > void pila< T >::borrar( Nodo *p ){//metodo auxiliar para borrar todo los nodos
    Nodo *q; 					       // se usa en el destrucctor es privado
    while(p!=NULL){
       q = p;
       p = p->next;
       delete q;
    }
}

template < class T > bool pila< T >::top( T &x ){// metodo top te regresa el valor de el nodo hasta arriba
	if(!isEmpty()){ 			 // de la pila en la variable que pasa por parametro se 
		x = start->data;		 // se guarda el valor regresando un booleano como metodo.
		return true;
	}
	return false;
}




template < class T > pila< T >::~pila(){borrar(start);}//Destrucctor

template < class T > bool pila< T >::isFull(){ return s==n;}//metodo auxiliar para saber si la l¿pila esta llena
template < class T > bool pila< T >::isEmpty(){ return s==0;}//metodo auxiliarp ara saber si lap ila esta vacia



#endif  //fin __pila
