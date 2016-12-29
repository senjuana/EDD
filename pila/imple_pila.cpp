#include "pila.h"

template < class T > pila< T >::pila( int s ){
	size = s > 0 ? s : 10;
	top = -1;			//inicia un pila vacia
	stackPtr = new T[ size ];	//asigna espacio para los elementos
}

template < class T > bool pila< T >::push( const T &pushValue ){
	if ( !isFull() ){
		stackPtr[ ++top ] = pushValue;	//coloca un elemento en la pila
		return true;
	}
	return false;
}

template < class T > bool pila<T >::pop( T &popValue ){
	if ( !isEmpty() ){
		popValue = stackPtr[ top-- ];	//elimina el elemento mas arriba en la pila
		return true;
	}
	return false;
}

