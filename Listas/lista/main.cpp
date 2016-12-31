#include "lista.h"
#include <bits/stdc++.h>
using namespace std;

int main(){
    lista < int > l(20);

    l.insert(2);
    l.insert(24);
    l.insert(23);
    l.insert(46);
    l.insert(1);
    l.insert(256);
    l.insert(34);
    l.insert(2532);

    l.printList();
    cout<<endl;

    l.delet(24);
    l.delet(54);
    l.delet(1);

    l.printList();
    cout<<endl;
    return 0;
}
