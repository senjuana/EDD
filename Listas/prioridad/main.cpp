#include <bits/stdc++.h>
#include "EList.h"

using namespace std;

int main()
{
    EList lista;
  srand(time(NULL));

  init(lista,20);

     int x = 4;
     int y = 7;
     char c ='a';

    inser(lista,x,y,c);
    x=3;
    y=9;
    c='b';
    inser(lista,x,y,c);
    x=5;
    y=10;
    c='c';
    inser(lista,x,y,c);
    x=1;
    y=3;
    c='d';
    inser(lista,x,y,c);
    x=2;
    y=1;
    c='e';
    inser(lista,x,y,c);


  cout << "Contenido" << endl;
  print(lista);
  proceso(lista);
  cout<<"--------------------"<<endl;
  print(lista);





    return 0;
}
