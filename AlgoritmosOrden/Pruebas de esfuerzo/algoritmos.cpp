//
// Created by senjuana on 7/06/16.
//
#include <bits/stdc++.h>
#include "algoritmos.h"

using namespace std;
int cont = 0;
void bubble(int arreglo[], int lon){
    for(int i=0;i<lon-1;i++)
        for(int j=0;j<lon-1;j++)
            if(arreglo[j] > arreglo[j+1])// cambia "<" a ">" para cambiar la manera de ordenar
                swap(arreglo[j],arreglo[j+1]);
}
void swap(int &a,int &b){
    int aux = a;
    a = b;
    b = aux;
}
void quicksort(int *a,int init,int final){
    int i,j,pivot;
    i = init;
    j = final;
    pivot = a[(init+final)/2];

    do{
        //cont++;

        while(a[i] < pivot){
            i++;
            cont++;
        }

        while(a[j] > pivot) {
            j--;
            cont++;
        }

        if(i<=j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }while(i<=j);

    if(init <= j) quicksort(a,init,j);
    if(final >= i) quicksort(a,i,final);
}
/*int getcont(){
    return cont;
}*/

void imprimir(int *a,int n){
    for(int i = 0 ;i < n;i++){
        cout << a[i] <<" ";
    }
}
void llenar(int *a,int n){
    for(int i =0;i<n;i++){
        a[i] = rand() % 10000;
    }

}
void merge(int *arre,int init,int n1,int n2) {
    int *aux = new int[n1 + n2];
    //cont += n1+n2;x
    int temp = 0;
    int temp1 = 0;
    int temp2 = 0;

    while (temp1 < n1 && temp2 < n2) {
        if (arre[init + temp1] < arre[init + n1 + temp2])
            aux[temp++] = arre[init + (temp1++)];
        else
            aux[temp++] = arre[init + n1 + (temp2++)];

        cont++;
    }
    while (temp1 < n1) {
        aux[temp++] = arre[init + (temp1++)];
       // cont++;
    }
    while (temp2 < n2) {
        aux[temp++] = arre[init + n1 + (temp2++)];
        //cont++;
    }
    for (int i = 0; i < n1+n2; i++)
        arre[init + i] = aux[i];
}
void mergesort(int *a,int init,int final) {
    int n1;
    int n2;
    if (final > 1)
    {
        n1 = final / 2;
        n2 = final - n1;
        mergesort(a, init, n1);
        mergesort(a, init + n1, n2);
        merge(a, init, n1, n2);
    }
}

//pruebas
int complejidad(){




}
int bubblec(int arreglo[], int lon) {
    int cont = 0;
    for (int i = 0; i < lon - 1; i++)
        for (int j = 0; j < lon - 1; j++) {
            cont++;
            if (arreglo[j] > arreglo[j + 1])// cambia "<" a ">" para cambiar la manera de ordenar
                swap(arreglo[j], arreglo[j + 1]);
        }
    return cont;
}
int getcont(){ return cont; }
void cleancont(){cont=0;}