#include <bits/stdc++.h>
#include "EList.h"

using namespace std;

int main()
{
    EList lista;
  srand(time(NULL));

  init(lista,20);

  int n = rand() % 100;
  cout<<"intentara agregar "<<n<<" datos"<<endl;
  for (int i = 0; i < n; i++) {
     int x = rand() % 11;

    cout <<"Esta entrando: "<< x << endl;
    inser(lista,x);
  }

  cout << "Contenido" << endl;
  print(lista);

    int x =rand() % 11;
  cout<<"intentara borar "<<x<<" datos"<<endl;
  for(int i=0;i<x;i++){
   n= rand() % 11;
   cout <<"intenta borar: "<< n << endl;
    if(del(lista,n))cout<<"se borro con exito el dato "<<n<<endl;
    else cout<<"El dato no se encontro"<<endl;
  }

  cout << "Contenido" << endl;
  print(lista);

    return 0;
}
