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


#include "imple_pila.tpp"

#endif//fin __pila
