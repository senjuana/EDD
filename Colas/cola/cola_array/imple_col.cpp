#include "cola.h"
using namespace std;

void cola::encolar(const int x){
    if(vacia()){ //entrada si esta vacia
    	start = new Nodo(x);
    	endcol = start;
    	s++;
    	return;
    }

    if(full()) 
	return;

    Nodo *p;
    Nodo *q;
    p = new Nodo(x);//entrada por el final
    q = endcol;
    q->next = p;
    endcol = p; //actualizacion endcol
    s++;
}

void cola::desencolar(){
    if(vacia())
	return;
    
    Nodo *p;
    p = start;
    start = start->next;
    delete p;
}

void cola::borrar(Nodo* &p){
    Nodo *q;
    while(p!=NULL){
       q = p;
       p = p->next;
       delete q;
    }
}

void cola::print(){
    Nodo *p;
    p = start;
    while(p!=NULL){
        cout<<p->data<<" ";
        p = p->next;
    }
}

cola::~cola(){borrar(start);}

bool cola::full(){ return s==n;}
bool cola::vacia(){ return s==0;}
