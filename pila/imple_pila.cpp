#include "pila.h"
#include <bits/stdc++.h>
using namespace std;

void pila::push(const int x){
  if(vacia()){
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
