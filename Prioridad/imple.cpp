#include "priori.h"
#include <bits/stdc++.h>

using namespace std;
nodo *crearnodo(int x,int y){
nodo *p;
p->next=NULL;
p->prioridad=x;
p->tiempo=y;
return p;
}

void init(prio &a,int x){
   a.s=0;
   a.n=x;
   a.start=NULL;
}
bool vacio(prio &a){return a.s==0;}
bool llena(prio &a){return a.n==a.s;}

bool del(prio &,int x)

void inser(prio &a, int x,int y){
  if(llena(a)){cout<<"La estructura esta llena";
  return;}
  if(vacio(a))a.start=crearnodo(x,y);
  else{
     nodo *p;
     nodo *q=NULL;
     p=a.start;
     while(p!=NULL && x<p->prioridad){
        q=P;
        p=p->next;
     }
     if(q==NULL){//insercion por el frente
        q=crearnodo(x,y);
        a.start=q;
        q.next=p;
        a.s++;
        return;
     }
     if(p==NULL){//insercion por el final
        p=crearnodo(x,y);
        q.next=p;
        a.s++;
        return;
     }
     else{//insercion por enmedio
        nodo *aux;
        aux=crearnodo(x,y);
        q->next=aux;
        aux->next=p;
        a.s++;
        return;
     }
  }
  a.s++;
  return;
}

void print(prio &a){
nodo *P;
nodo *q;
p=a.start;
while(p!=NULL){
q=p;
p=p->next;
if(q->tiempo!= 0&& q->tiempo>0){
cout<<q->nom<<" tiempo:"<<q->tiempo<<" prioridad:"<<q->prioridad<<" ";
}
}
}

