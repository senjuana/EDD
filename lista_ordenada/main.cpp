#include "lista_orden.h"
#include <bits/stdc++.h>

using namespace std;

int main()
{
  srand(time(NULL));
  lista list;

  init(list,10);

  int n = rand() % 11;

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
    if(del(lista,n)==0)cout<<"El dato no se encontro"<<endl
    cout<<"se borro con exito el dato "<<n<<endl;
  }

return 0;
}
