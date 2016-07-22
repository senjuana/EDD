//
// Created by senjuana on 7/06/16.
//

#ifndef PRACTICA4_ALGORITMOS_H
#define PRACTICA4_ALGORITMOS_H

#include "arbol.h"
int getcont();
void cleancont();
void bubble(int arreglo[], int lon);
void swap(int &a,int &b);
void quicksort(int *a,int init,int final);
void imprimir(int *a,int n);
void merge(int *matrix,int init,int n1,int n2);
void mergesort(int *a,int init,int final);
void llenar(int *a,int n);

//complejidades
int bubblec(int arreglo[], int lon);

#endif //PRACTICA4_ALGORITMOS_H
