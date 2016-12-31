#ifndef __lista
#define __lista
template < class T > class lista {
	private:
	//creacion del tipo de dato nodo para la lista:
   	typedef struct snode {
		T data;
	   	snode *next;
   	}Nodo;
   	// Atributos de la clase capacidad, tamaño y punteros:
   	Nodo *start;
   	int n;
   	int s;
	bool isFull();
	bool isEmpty();
	void borrar (Nodo *&);
  	public:
   	// Constructor y destructor basicos:
   	lista(const int x);
   	~lista();
   	// Insertar en la lista:
   	bool insert(const T&);
   	// Borrar un elemento de la lista:
   	bool delet(const T&);
   	void printList(); 
};
#include "imple_list.tpp"

#endif//fin __lista
