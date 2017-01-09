#ifndef Arbol
#define Arbol
template < class T > class arbol {
  private:
	   typedef struct snode{
    			int data;
    			struct snode *left;
    			struct snode *right;
		}Nodo;
		//atributos y metodos auxiliares
		Nodo *root;
    int n;
    int s;

    void borrar( Nodo *root );
    void print( Nodo *root );

  public:
    //metodos escenciales
    bool insertar( T& x );
    void inOrden();
    void postOrden();
    void preOrden();

#endif
