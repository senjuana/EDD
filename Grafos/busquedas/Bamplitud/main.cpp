#include "cola.h"
//#include "imple_col.cpp"
#include <bits/stdc++.h>

using namespace std;

int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  cola p(20);

  p.encolar(3);
  p.encolar(8);
  p.encolar(4);
  p.encolar(234);

  p.print();
  cout<<"\n"; 
  p.desencolar();
  
  p.encolar(45);
  p.print();
  cout<<"\n";

  return 0;    
}
