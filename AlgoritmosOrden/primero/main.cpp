#include <bits/stdc++.h>
using namespace std;

int mayor(int *lista,int n){
int aux = lista[0];

for(int i =1;i<n;i++){
    if(lista[aux]<lista[i])
        aux=i;
}

return aux;
}

void cambio(int &a,int &b){
int aux = a;
a = b;
b = aux;
}

void print(int *l,int n){
for(int i =0;i<n;i++){
    cout<< l[i]<<" ";
}
}

int main(){
    srand(time(NULL));
    int lista[20],k=20,m;

    for(int i =0; i<k;i++){
        lista[i]=rand() % 100;
    }
    print(lista,20);

    while(k>2){
         m = mayor(lista,k+1);

        cambio(lista[k],lista[m]);
        k--;
    }
    cout<<endl;
    print(lista,20);
   return 0;
}
