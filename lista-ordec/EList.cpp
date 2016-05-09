#include "EList.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

void init(EList &lista,int n){
    lista.start = NULL;
    lista.n=n;
    lista.s=0;
}

void inser(EList &lista, int x){
  if (llena(lista)) return;
  if (vacio(lista)) lista.start = crearnodo(x);//insercion si esta vacia
  else{
    nodo *p;
    nodo *q;
    nodo *aux;
     q=NULL;
    p=lista.start;
    while(p!=NULL && x>p->data){//busqueda
        q=p;
        p=p->next;
    }
     if(q==NULL){//enfrente
     aux=crearnodo(x);
     aux->next=p;
     lista.start=aux;
     return;
     }
     else if(p==NULL){//final
     aux=crearnodo(x);
     q->next=aux;
     aux->next=p;
     return;
     }
     else if(p->data==x){//si es igual
     cout<<"El dato que intentas ingresar ya se encuentra."<<endl;
     return;
     }
     aux=crearnodo(x);//enmedio
     q->next=aux;
     aux->next=p;
     }
  lista.s++;
}

bool del(EList &lista,int x){
    nodo *p;
    nodo *q;
    if(vacio(lista))return false;
    if(lista.start->data==x){//si el primer dato es igual reacomoda la lista
        p=lista.start;
        lista.start=p->next;           //y elimina el nodo
        delete p;
        return true;
    }
    p=lista.start;
    while(p!=NULL && p->data !=x){//recorre la lista buscando el dato
        q = p;
        p = p->next;
    }
    if(p!=NULL){//el dato se encontro
        q->next=p->next;
        delete p;
        return true;
    }
    return false;
}

void print(EList &lista){
    nodo *p = lista.start;
    while(p != NULL){
        cout<<p->data<<" ";
        p =p->next;
    }
}

 nodo *crearnodo(int data ){
    nodo *p =new nodo;
    p->data = data;
    p->next =NULL;
    return p;
 }

 bool vacio(EList &lista){
    return lista.s==0;
 }

 bool llena(EList &lista){
    return lista.s==lista.n;
 }



