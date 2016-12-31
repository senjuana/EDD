#ifndef __cola
#define __cola

template < class T > class cola {
  	private:
	//Estrucctura Nodo // Mas facil que manjar una clase nodo	
   	typedef struct snode{
		T data;
		snode *next;
	}Nodo;
	// Atributos de la clase capacidad, tamaño y punteros:
   	Nodo *start;
   	Nodo *endcol;
   	int n;
   	int s;
	//Metodos auxiliares
	void borrar( Nodo *& );
	bool isFull();
	bool isEmpty();
 
	public:
  	// Constructor y destructor basicos:
   	cola( const T& );
  	~cola();

   	bool Enqueue( const T& );
   	bool Dequeue();
	bool front( const T& );
   	void printQueue();
};

#include "imple_col.tpp"
#endif//fin __cola
