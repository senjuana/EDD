#include "listO.h"
#include <bits/stdc++.h>
using namespace std;

int main(){
    lista l(20);

    l.inser(2);
    l.inser(24);
    l.inser(23);
    l.inser(46);
    l.inser(1);
    l.inser(256);
    l.inser(34);
    l.inser(2532);

    l.print();
    cout<<endl;

    l.del(24);
    l.del(54);
    l.del(1);

    l.print();

    return 0;
}
