#include <bits/stdc++.h>
using namespace std;
//Implementacion
template < class T > cola< T >::cola( const T& x ){
	n = x > 0 ? x : 10;
	s = 0;
	start = NULL;
	endcol = NULL;
}
template < class T > cola< T >::~cola(){borrar (start);}

template < class T > bool cola< T >::Enqueue( const T &EnqueueValue ){
	Nodo *aux = new Nodo;
	aux->data = EnqueueValue;
	if(isEmpty()){
		start = endcol = aux;
		s++;
		return true;
	}else if(!isFull()){
		endcol->next = aux;
		endcol = aux;
		s++;
		return true;
	}
	return false;
}
template < class T > bool cola< T >::Dequeue(){
	Nodo *aux;
	if(!isEmpty()){
		aux = start;
		start = start->next;
		delete aux;
		s--;
		return true;
	}
	return false;
}

template < class T > bool cola< T >::front( const T &frontValue ){
	if(!isEmpty()){
		frontValue = start->data;
		return true;
	}
	return false;
}

template < class T > void cola< T >::printQueue(){
	if(!isEmpty()){
		Nodo *p = start;
		while( p != NULL ){
			cout<<" "<<p->data;
			p = p->next;
		}
	}
}
		
//Metodos Auxiliares
template < class T > void cola< T >::borrar( Nodo *&p){
	Nodo *q;
	while( p != NULL ){
		q = p;
		p = p->next;
		delete q;
	}
}

template < class T > bool cola < T >::isFull(){ return s == n; }
template < class T > bool cola < T >::isEmpty(){ return s == 0; }


