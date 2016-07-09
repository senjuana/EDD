#include <bits/stdc++.h>
using namespace std; 
  
 void ordenar_numeros(int arreglo[], int lon){
        int Temp;
         for(int i=0;i<lon;i++)
                for(int j=0;j<lon-1;j++)
                    if(arreglo[j]>arreglo[j+1]){// cambia "<" a ">" para cambiar la manera de ordenar
                        Temp=arreglo[j];
                        arreglo[j]=arreglo[j+1];
                        arreglo[j+1]=Temp;}

                 for(int i=0;i<lon;i++)
                    cout<<arreglo[i]<<" ";
                        }





int main(){
   int lon,n;
   srand(time(NULL));
   cout<<"Ingresa el numero de numeros a capturar: ";
   cin>>lon;

   int arr[lon];
   for(int i=0;i<lon;i++){
        n = rand() % 101;
        arr[i]=n;
    }
    cout<<endl<<"Numeros ordenados: "<<endl;
    ordenar_numeros(arr,lon);
    cout<<endl;
return 0;
}
