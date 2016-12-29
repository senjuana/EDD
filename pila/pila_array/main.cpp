#include <bits/stdc++.h>
#include "pila.h"

using namespace std;

int main (){

	pila < double > piladouble(5);
	double f = 1.1;

	while(piladouble.push(f))
		f += 1.1;
	
	while(piladouble.top(f)){
		cout<<f <<' ';
		piladouble.pop();
	}
	
	return 0;
}
