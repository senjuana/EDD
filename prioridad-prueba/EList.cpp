#include "EList.h"
#include <iostream>
#include <stdlib.h>
using namespace std;

void init(EList &lista,int n){
    lista.start = NULL;
    lista.n=n;
    lista.s=0;
}

void inser(EList &lista, int x,int y, char c){
  if (llena(lista)) return;
  if (vacio(lista)) lista.start = crearnodo(c,x,y);//insercion si esta vacia
  else{
    nodo *p;
    nodo *q;
    nodo *aux;
     q=NULL;
    p=lista.start;
    while(p!=NULL && x>=p->prioridad){//busqueda
        q=p;
        p=p->next;
    }
     if(q==NULL){//enfrente
     aux=crearnodo(c,x,y);
     aux->next=p;
     lista.start=aux;
     lista.s++;
     return;
     }
     else if(p==NULL){//final
     aux=crearnodo(c,x,y);
     q->next=aux;
     aux->next=p;
     lista.s++;
     return;
     }
     aux=crearnodo(c,x,y);//enmedio
     q->next=aux;
     aux->next=p;
     }
  lista.s++;
}



void print(EList &lista){
    nodo *p = lista.start;
    while(p != NULL){
        cout<<p->p<<" tiempo:"<<p->tiempo<<" prioridad:"<<p->prioridad;
        p =p->next;
    }
}

 nodo *crearnodo(char c,int x, int y ){
    nodo *p =new nodo;
    p->p = c;
    p->prioridad = x;
    p->tiempo = y;
    p->next =NULL;
    return p;
 }

 bool vacio(EList &lista){
    return lista.s==0;
 }

 bool llena(EList &lista){
    return lista.s==lista.n;
 }


void proceso(EList &lista){
nodo *p;
int prom;
p=lista.start;
prom=prome(lista);
p->tiempo=p->tiempo-prom;
p->prioridad--;
}

int prome(EList &lista){
nodo *p;
int cont=0;
p=lista.start;
while(p!=NULL){
  cont+=p->tiempo;
  p=p->next;
}

return cont;
}


void reacomodo(EList &lista){
nodo *p;
nodo *q;
nodo *aux;
p=lista.start;
lista.start=lista.start->next;

while(q!= NULL && p->prioridad>=q->prioridad){
aux=q;
q=q->next;
}
if(q==NULL){
  aux->next=p;
  p->next=NULL;
}
else{
  aux->next=p;
  p->next=q;
}
}
