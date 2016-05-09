#include <bits/stdc++.h>
#include "list.h"
using namespace std;

lista::Nodo *lista::crearnodo(int x){
  Nodo *p;

  p->data = x;
  p->next = NULL;

  return p;
}


lista::lista(int x){
    n = x;
    s = 0;
    start = NULL;
}


 bool lista::vacio(){ return s == 0;}
 bool lista::full(){ return s == n;}

bool lista::inser(int x){
if (full()) return false;
if (vacio()) start -> crearnodo(x);//insercion si esta vacia
  else{
    Nodo *p;
    Nodo *q;
    Nodo *aux;
    q=NULL;
    p=start;
    while(p!=NULL && x>p->data){
        q=p;
        p=p->next;
    }
    if(q==NULL){//insercion por el frente
        aux->crearnodo(x);
        aux->next=p;
        start=aux;
        s++;
        return true;
    }
    if(p==NULL){//insercion por el final
        q->next-> crearnodo(x);
        s++;
        return true;
    }
    if(x==p->getdata()){return false;}

    aux->crearnodo(x);//insercion por el medio
    q->next=aux;
    aux->next=p;
  }
  s++;
  return true;
}

bool lista::del(int x){
    Nodo *p;
    Nodo *q;
    if(vacio())return false;
    if(x==start->getdata()){//si el primer dato es igual reacomoda la lista
        p=start;
        start=start->next;
        delete p;
        return true;
    }
    else{
    p=start;
    while(p!=NULL && p->getdata()!=x){//recorre la lista buscando el dato
        q = p;
        p = p->next;
    }
    if(p!=NULL){//el dato se encontro
        q->next = p->next;
        delete p;
        return true;
      }
    }
    return false;
}


lista::~lista(){
Nodo *p;
Nodo *q;
p=start;
while(p != NULL){
q=p;
p=p->next;
delete q;
}

}

void lista::print(){
Nodo *p;
p=start;
while(p!=NULL){
   cout<<p->getdata()<<" ";
   p=p->next;
}

}
