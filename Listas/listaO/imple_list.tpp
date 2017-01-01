#include <bits/stdc++.h>
using namespace std;

template < class T > lista<T>::lista(const int x){
	n = x > 0 ? x: 10 ;
	s = 0;
	start = NULL;
}
		
template < class T > bool lista<T>::insert(const T& x){
	Nodo *aux = new Nodo;
	aux->data = x;
	if(!isFull()){
		if(!isEmpty()){
			Nodo *p = start;
			Nodo *q = NULL;
			while( p!=NULL && p->data < x){ //la comprobacion para saber como acomodarlos
				q = p;			//en esta se acomodan los datos de menor a mayor	
				p = p->next;
			}
			if(q == NULL){ //Entrada por enfrente
				aux->next = p;
				start = aux;
				s++;
				return true;
			}
			if(p == NULL){ //entrada al final
				q->next = aux;
				s++;
				return true;
			}else{ //entrada por la mitad 
				q->next = aux;
				aux->next = p;
				s++;
				return true;
			}
		}else{
			start = aux;
			s++;
			return true;
		}
	}
	return false;
}

template < class T > bool lista<T>::delet(const T& x){
	if(!isEmpty()){
		Nodo *p = start;
		Nodo *q = NULL;

    		while(p!= NULL && p->data != x){
      			q = p;
      			p = p->next;
		}
		if(p == NULL)  // no se encontro el dato en la lista.
			return false;
		if(q == NULL){  //lo elimina encontro el dato al principio de la lista
			q = start;
			start = start->next;
			s--;
			delete q;
			return true;
		}
		q->next = p->next;	// elimina por que lo encontro en la mita de la lista
		s--;
		delete p;
		return true;
	}
	return false;
}

template < class T > void lista<T>::borrar(Nodo* &p){
    Nodo *q;
    while(p!=NULL){
       q = p;
       p = p->next;
       delete q;
    }
}

template < class T > void lista<T>::printList(){
    Nodo *p = start;
    while(p!=NULL){
        cout<<p->data<<' ';
        p = p->next;
    }
}

template < class T > lista<T>::~lista(){borrar(start);}

template < class T > bool lista<T>::isFull(){ return s==n;}
template < class T > bool lista<T>::isEmpty(){ return s==0;}
