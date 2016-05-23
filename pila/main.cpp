#include <bits/stdc++.h>
#include "pila.h"
using namespace std;

int main(){
    pila p(20);

    p.push(23);
    p.push(21);
    p.push(22);
    p.push(13);
    p.push(234);
    p.push(14);
    p.push(9);
    p.push(4);

    cout<<"Top: ";
    p.top();

    p.pop();
    cout<<endl;

    cout<<"Top: ";
    p.top();

    p.pop();
    cout<<endl;

    cout<<"Top: ";
    p.top();

    p.pop();
    cout<<endl;

    cout<<"Top: ";
    p.top();

    p.pop();
    cout<<endl;

    p.~pila();

    return 0;
}
