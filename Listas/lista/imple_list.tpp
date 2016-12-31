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
		aux->next = start;
		start = aux;
		s++;
		return true;
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
		if(p == NULL)
			return false;
		q->next = p->next;
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
