#include "colaprio.h"
#include <bits/stdc++.h>
using namespace std;

bool cola::encolar(const int x,char c){
    if(vacia()){ //entrada si esta vacia
    start = new Nodo(x,c);
    endcol = start;
    s++;
    return true;}
    if(full())return false;

    if(c=='a' || c == 'A'){
    Nodo *q;
    Nodo *p;
      q = NULL;
      p = start;
      while(p!= NULL && p->prioridad!= 'm' || p->prioridad!= 'M' && p->prioridad!= 'b' || p->prioridad!= 'B'){
        q = p;
        p = p->next;
      }
      if(q == NULL){//principio
        q = new Nodo(x,c);
        q->next = p;
        start = q;
        s++;
        return true;
      }
      if(p == NULL){//final
        p = new Nodo(x,c);
        q->next = p;
        endcol = p;
        s++;
        return true;
      }else{ //enmedio
        Nodo *aux;
        aux = new Nodo(x,c);
        q->next = aux;
        aux->next =p;
        s++;
        return true;
      }
    }else if( c =='m' || c == 'M'){
    Nodo *p;
    Nodo *q;
        q = NULL;
        p = start;
        while(p!= NULL && p->prioridad!= 'b' || p->prioridad!= 'B'){
          q = p;
          p = p->next;
        }
        if(q == NULL){
          q = new Nodo(x,c);
          q->next = p;
          start = q;
          s++;
          return true;
        }
        if(p == NULL){//final
          p = new Nodo(x,c);
          q->next = p;
          endcol = p;
          s++;
          return true;
        }else{
          Nodo *aux;
          aux = new Nodo(x,c);
          q->next = aux;
          aux->next =p;
          s++;
          return true;
        }
      }else{
        endcol->next = new Nodo(x,c);
        endcol = endcol->next;
        s++;
        return true;
      }
return false;
}

bool cola::desencolar(){
    if(vacia())return false;
    Nodo *p;
    p = start;
    start = start->next;
    delete p;
    return true;
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
        cout<<p->id<<" "<<p->prioridad<<" /";
        p = p->next;
    }
}



cola::~cola(){borrar(start);}

bool cola::full(){ return s==n;}
bool cola::vacia(){ return start==NULL;}
