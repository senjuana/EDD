#ifndef __pila
#define __pila
#include <bits/stdc++.h>


                  //template que admite todo tipo de dato en la pila 
template < class T >class pila {
  public:
	pila( int = 10 );              // tamaño predeterminado en 10
   	~pila(){ delete [] stackPtr; }// destrucctor 
	bool push( const T& );        //insercion de un elemento en la pila
	bool pop( T& );                //sacar un elemento de la pila 
  private:
 	int  size;                    //numero de los elementos
	int top;		      //ubicacion del elemento superior
	T *stackPtr;

	bool isEmpty() const { return top == -1; }
	bool isFull() const { return top == size -1; }	
};

//implementacion
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


#endif//fin __pila
