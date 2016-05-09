#include "lista_orden.h"
#include <bits/stdc++.h>
using namespace std;

lista::Nodo *lista::Nodo::crearnodo(int data){
  lista::Nodo *p= new Nodo;

  this -> data = data;
  p -> next = NULL;

  return p;
}


int lista::Nodo::getdata(){
return data;
}

lista::~lista(){
Nodo *p;
Nodo *q;
p=start;
while(p!=NULL){
q=p;
p=p->next;
delete q;
}
delete p;
}

void lista::init(lista, int n){
  start= NULL;
  this -> n=n;
  this -> s=0;
}

bool lista::vacio(lista){
  //if (list.s==0) return true;
  return s == 0;
}

bool lista::full(lista ){
  return s == n; // si size y capacidad son iguales esta llena
}

void lista::inser(lista, int x){
  if (full(lista)) return;
  if (vacio(lista)) start -> crearnodo(x);//insercion si esta vacia
  else{
    Nodo *p;
    Nodo *q;
    Nodo *aux;
    p=start;
    while(p!=NULL && x<p->getdata()){
        q=p;
        p=p->next;
        if(x==start->getdata()){//insercion por el frente
            start->crearnodo(x);
            start->next=p;
            return;
        }//insercion por en medio

         if(x==p->getdata()){
          cout<<"El dato que intento agregar ya existe"<<endl;
          return;
        }
        aux->crearnodo(x);
        q->next=aux;
        aux->next=p;
    }//insercion por el final
    if(x==p->getdata()){
          cout<<"El dato que intento agregar ya existe"<<endl;
          return;
        }
    aux->crearnodo(x);
    q->next=aux;
    aux->next=p;
  }
  s++;
}

void print (lista){
  lista::Nodo *p = lista::start;

  while (p != NULL) {
    p = lista::start;
    cout << p ->data<< endl;
    p = p->next;
  }
}

int lista::del(lista,int x){
    Nodo *p;
    Nodo *q;
    if(vacio(lista))return 0;
    if(x==start->getdata()){//si el primer dato es igual reacomoda la lista
        p=start;           //y elimina el nodo
        delete p;
        return x;
    }
    p=start;
    while(p!=NULL && p->getdata()!=x){//recorre la lista buscando el dato
        q = p;
        p = p->next;
    }
    if(p!=NULL){//el dato se encontro
        q=p->next;
        delete p;
        return x;
    }
    return 0;
}


