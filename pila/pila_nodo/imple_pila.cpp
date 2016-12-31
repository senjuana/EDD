#include "pila.h"
#include <bits/stdc++.h>
using namespace std;

template < class T > pila< T >::pila( int capa ){
	start = NULL;
	n = capa > 0 ? capa : 10 ;
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
