#ifndef __pila
#define __pila

//template que admite todo tipo de dato en la pila 
template < class T >class pila {
  public:
	pila( int = 10 );              // tamaño predeterminado en 10
   	~pila(){ delete [] stackPtr; }// destrucctor 
	bool push( const T& );        //insercion de un elemento en la pila
	bool pop();                //eliminar el dato de hasta arriba
       	bool top( T& );			//devolver el dato de arriba	
  private:
 	int  size;                    //numero de los elementos
	int indice;		      //ubicacion del elemento superior
	T *stackPtr;

	bool isEmpty() const { return indice == -1; }
	bool isFull() const { return indice == size -1; }	
};


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

#endif//fin __pila
