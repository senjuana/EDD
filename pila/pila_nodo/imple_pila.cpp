#include "pila.h"
using namespace std;

template < class T > pila< T >::pila( int capa ){
	start = NULL;
	n = capa;
	s = 0;
}

template < class T > bool pila< T >::push(int x){
  if(!isEmpty()){
    start = new Nodo(x);
    s++;
    return;
  }
  else{
    Nodo *p;
    p = new Nodo(x);
    p->next = start;
    start = p;
    s++;
  }
}
void pila::pop(){
    if(vacia())return;
    Nodo *p;
    p = start;
    start = start->next;
    delete p;
    s--;
}
void pila::borrar(Nodo* &p){
    Nodo *q;
    while(p!=NULL){
       q = p;
       p = p->next;
       delete q;
    }
}

void pila::top(){cout<<start->data;}

pila::~pila(){borrar(start);}

bool pila::full(){ return s==n;}
bool pila::vacia(){ return s==0;}
