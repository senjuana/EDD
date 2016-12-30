#include <bits/stdc++.h>
#include "pila.h"
using namespace std;

int main(){
    pila < int > p(20);
    int x;	
    p.push(23);
    p.push(21);
    p.push(22);
    p.push(13);
    p.push(234);
    p.push(14);
    p.push(9);
    p.push(4);

    p.top(x);
    cout<<"Top: "<<x;

    p.pop();
    cout<<endl;

    p.top(x);	
    cout<<"Top: "<<x;

    p.pop();
    cout<<endl;
    
    p.top(x);
    cout<<"Top: "<<x;

    p.pop();
    cout<<endl;
    
    p.top(x);    
    cout<<"Top: "<<x;

    p.pop();
    cout<<endl;

    return 0;
}
