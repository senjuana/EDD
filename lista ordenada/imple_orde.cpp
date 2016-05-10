#include "listO.h"
#include <bits/stdc++.h>
using namespace std;

void lista::inser(const int x){
    if(full())return;
    if(vacia()) start = new Nodo(x);
    else{
        Nodo *p;
        Nodo *q = NULL;
        p = start;
        while(p!=NULL && x>p->data){
            q = p;
            p = p->next;
        }
        if(q==NULL){
            q = new Nodo(x);
            start = q;
            q->next =p;
            s++;
            return;
        }
        if(p==NULL){
            q->next = new Nodo(x);
            s++;
            return;
        }
        if(x == p->data){
            cout<<"Ese dato no lla se encuentra en la lista"<<endl;
        }
        Nodo *aux;
        aux = new Nodo(x);
        q->next = aux;
        aux->next = p;
        s++;
    }
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
