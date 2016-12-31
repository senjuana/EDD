#include "pila.h"
#include <bits/stdc++.h>

using namespace std;

int main (){
	//instanciacion de tres objetos con diferentes tipo de dato
	pila < int > pilaint(10);
	pila < double > piladouble(5);
	pila < char > pilachar(26);
	//declaracion de los valores que seran insertados	
	char c = 'A';
	double f = 1.1;
	int k = 1;

	while(piladouble.push(f))
		f += 1.1;
	
	while(piladouble.top(f)){
		cout<<f <<' ';
		piladouble.pop();
	}

	while(pilaint.push(k))
		k += 1;
	cout<<endl;
	while(pilaint.top(k)){
		cout<<k <<' ';
		pilaint.pop();
	}

	while(pilachar.push(c))
		c++;
	
	cout<<endl;
	while(pilachar.top(c)){
		cout<<c<< ' ';
		pilachar.pop();
	}
	cout<<endl;

	
	
	return 0;
}
