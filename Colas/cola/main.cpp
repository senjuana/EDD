#include <bits/stdc++.h>
#include "cola.h"

using namespace std;

int main(){
    cola m(20);
    m.encolar(15);
    m.encolar(13);
    m.encolar(10);
    m.encolar(134);
    m.encolar(8);
    m.encolar(1);
    m.encolar(0);

    m.print();
    cout<<endl;

    m.desencolar();
    m.desencolar();

    m.print();
    return 0;
}
