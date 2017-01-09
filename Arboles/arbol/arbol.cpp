using namespace std;

arbol::~arbol() { borrar(root); }

void arbol::borrar( nodo *root){
    if(root == NULL){return;}
    else{
        borrar(root->izq);
        delete root;
        borrar(root->der);
    }
}
bool arbol::insertar(int x){
    if(vacio()) {
        root = new nodo(x,NULL);
        s++;
        comp++;
        return true;
    }
    if( llena())return false;
    nodo *p = root;
    nodo *q;
    while(p!=NULL){
        q = p;
        comp++;
        if(x > p->data){
            p = p->der;
        }
        else{
            p = p->izq;
        }

    }
    nodo * aux;
    aux = new nodo(x,q);
    if( x > q->data ) {
        q->der = aux;
        s++;
    }
    else{
        q->izq = aux;
        s++;
    }
    return true;
}
bool arbol::llena(){return s==n;}
bool arbol::vacio(){return root == NULL;}
//pruebas1
void arbol:: inorden(int *arre,int i){ inordeni(root,arre);}
void arbol::inordeni(nodo * root, int *arre){
    if(root == NULL){
        return;
    }
    else{

        inordeni(root->izq,arre);
        dropdata(arre,root->data);
        inordeni(root->der,arre);

    }
}
void arbol::dropdata(int *arre, int a) { arre[i++]= a; }
int arbol::getcomp() {
    return comp;}
//pruebas
void arbol::print() {prin(root);}
void arbol::prin(nodo *root){

    if(root == NULL){
        return;
    }
    else{
        prin(root->izq);
        cout<< root->data <<" ";
        prin(root->der);
    }
}
