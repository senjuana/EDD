#include "lista.h"
#include <bits/stdc++.h>
using namespace std;

void lista::inser(const int x){

    if(vacia()){ //entrada si esta vacia
    start = new Nodo(x);
    s++;
    return;}
    if(full())return;

    Nodo *p;
    p = new Nodo(x);//entrada por el principio
    p->next = start;
    start =p;
    s++;
}
void lista::del(const int x){
    if(vacia())return;
    Nodo *p =NULL;
    Nodo *q;
    p = start;
    while(p!= NULL && p->data != x){
      q = p;
      p = p->next;
    }
    if(p == NULL)return;
    if(q == NULL){
      start = start->next;
      delete p;
    }
    else{
      q->next = p->next;
      delete p;
    }
}

void lista::borrar(Nodo* &p){
    Nodo *q;
    while(p!=NULL){
       q = p;
       p = p->next;
       delete q;
    }
}

void lista::print(){
    Nodo *p;
    p = start;
    while(p!=NULL){
        cout<<p->data<<" ";
        p = p->next;
    }
}

lista::~lista(){borrar(start);}

bool lista::full(){ return s==n;}
bool lista::vacia(){ return s==0;}
