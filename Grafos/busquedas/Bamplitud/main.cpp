#include "cola.h"
//#include "imple_col.cpp"
#include <bits/stdc++.h>

using namespace std;

int main(){
  cola p(20);

  p.encolar(3);
  p.encolar(8);
  p.encolar(4);
  
  p.print();
  cout<<"\n"; 
  p.desencolar();

  p.print();
  cout<<"\n";

  return 0;    
}
