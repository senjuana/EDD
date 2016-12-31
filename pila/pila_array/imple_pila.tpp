
//implementacion
template < class T > pila< T >::pila( int s ){
	size = s > 0 ? s : 10;		//si instancea una pila de 0 elementos la hace de forma predeterminada de 10 elementos
	indice = -1;			//inicia un pila vacia
	stackPtr = new T[ size ];	//asigna espacio para los elementos
}

template < class T > bool pila< T >::push( const T &pushValue ){
	if ( !isFull() ){
		stackPtr[ ++indice ] = pushValue;	//coloca un elemento en la pila
		return true;
	}
	return false;
}

template < class T > bool pila<T >::pop(){
	if ( !isEmpty() ){
		indice -= 1;	//elimina el elemento mas arriba en la pila
		return true;
	}
	return false;
}

template < class T > bool pila< T >::top( T &topValue ){	//ingresa una variable donde guardar el dato de top
	if(!isEmpty() ){
		topValue = stackPtr[ indice ]; 			//guarda el dato de top en la variable parametro
		return true;
	}
	return false;
}


