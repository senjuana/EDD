#ifndef __lista_
#define __lista_
#ifndef Nodo
#define Nodo

class Nodo{
    private:
        int valor;
        Nodo *siguiente;

    public:
        Nodo(int valor, Nodo *siguiente=NULL){
            this->valor = valor;
            this->siguiente = siguiente;
        }

        void setValor(string valor){
            this->valor = valor;
        }
        void setSiguiente(Nodo *siguiente){
            this->siguiente = siguiente;
        }
        int getValor(){
            return this->valor;
        }
        Nodo *getSiguiente(){
            return this->siguiente;
        }
}

class Lista{
    private:
        Nodo *start; //Primer elemento de la lista

    public:
        Lista(){
            this->start = NULL; //La lista parte sin nada
        }

        //Getter y setter de la start
        void setstart(Nodo *nodo){
            this->start = nodo;
        }
        Nodo *getstart(){
            return this->start;
        }

        /*Devuelve el ultimo nodo de la lista.
        Busca la start, y si no es NULL, va avanzando
        por los siguientes hasta que encuentra el final
        que si tiene NULL*/
        Nodo *getUltimo(){
            Nodo *aux;
            aux = this->start;
            if(aux){
                while(aux->getSiguiente() != NULL){
                    aux = aux->getSiguiente();
                }
            }
            return aux;
        }

        /*Esta funcion busca un string, ya que nuestra
        lista es de strings. Se puede reemplazar string
        por cualquier otro tipo, siempre que se cambie en Nodo */
        Nodo *buscar(int valor){
            Nodo *aux;
            aux = this->start;
            while(aux){
                if(aux->getValor() == valor)
                    return (aux); //Si encuentra, retorna
                aux = aux->getSiguiente(); //Si no, avanza al siguiente
            }
            return NULL; //Si no esta en la lista, retorna nulo
        }

        /* Funcion para insertar un nodo nuevo.
        Recibe el valor a agregar, lo convierte en un nodo
        y lo agrega a la lista.
        Si el ultimo nodo existe, se lo agrega a la cola.
        Si el ultimo no existe, la lista esta vacia, por
        lo tanto lo agrega como start
        */
        void *insertar(string valor){
            nodo *nodoNuevo, *aux;
            nodoNuevo = newNodo(valor);
            aux = this->getUltimo();
            if(aux)
                aux->setSiguiente(nodoNuevo)
            else
                this->setstart(nodoNuevo);

            return;
        }
};
#endif
#endif
