#include <bits/stdc++.h>
#include "list.h"
using namespace std;

int main()
{
    lista m(20);

    m.inser(3);
    m.inser(4);
    m.inser(35);
    m.inser(2);

    m.del(35);

    m.print();

    m.~lista();


    return 0;
}
