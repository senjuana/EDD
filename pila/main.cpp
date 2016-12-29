#include <bits/stdc++.h>
#include "pila.h"
using namespace std;

int main(){
	pila< double > piladouble(5);
	double f = 1.1;
	cout<< "Insertando elementos en la pila Double\n";
	
	while(piladouble.push(f)){
		cout<< f <<' ';
		f +=1.1;
	}

	cout<< "\nLa pila esta llena. No se puede insertar ele elemento "<< f
		<<"\n\nSacando elementos de la pila Double\n";
	while(piladouble.pop(f))
		cout<< f <<' ';

	cout<< "\n";			
    return 0;
}
