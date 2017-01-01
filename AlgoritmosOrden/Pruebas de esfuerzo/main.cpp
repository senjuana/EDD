#include "arbol.h"
#include "algoritmos.h"
using namespace std;

int main() {
    srand(time(NULL));
    int menu;
    cout<<"\nMenu\n";
    cout<<"Prueba de funcionamiento: 1\n"<<"Prueba de complejidad: 2 \n";
    cout<<"ingresa el caso que quieres correr: ";
    cin>>menu;
    switch (menu){
        case 1:{
            int n,menu2=0;
            while(menu2 !=5) {
                cout<<"\nTamaño del arreglo: ";
                cin>>n;
                int arre[n];
                llenar(arre,n);
                cout<<endl;
                imprimir(arre,n);
                cout<<"Ordenamiento\n";
                cout<<"\nBubblesort: 1\nQuicksort: 2\nMergesort: 3\nArbol: 4\nSalir: 5\n";
                cout<<"Ingresa la Opcion que quieres: ";
                cin>>menu2;
                switch (menu2) {
                    case 1: {
                        bubble(arre, n);
                        imprimir(arre, n);
                    }break;
                    case 2: {

                        quicksort(arre, 0, n-1);
                        imprimir(arre, n);
                    }
                        break;
                    case 3: {
                        mergesort(arre, 0, n);
                        imprimir(arre, n);
                    }break;
                    case 4: {
                        arbol a(n);
                        for(int i = 0; i<n;i++){
                            a.insertar(arre[i]);
                        }
                        a.inorden(arre,0);
                        imprimir(arre, n);
                    }break;
                }
            }

        }break;
        case 2:{
            //int n = 1000;
            int i=0;

            int a[10]={0,0,0,0,0,0,0,0,0,0};
            int b[10]={0,0,0,0,0,0,0,0,0,0};
            int c[10]={0,0,0,0,0,0,0,0,0,0};


            for(int n=1000;n<=10000;n+=1000) {
                    int arre[n];
                    llenar(arre, n);
                    quicksort(arre, 0, n - 1);
                    //imprimir(arre, n);
                    //cout << endl;
                    a[i++] += getcont();
                    cleancont();

                }
            i=0;
            for(int n=1000;n<=10000;n+=1000) {
                int arre[n];
                llenar(arre, n);
                mergesort(arre, 0, n );
                //imprimir(arre, n);
                //cout << endl;
                b[i++] += getcont();
                cleancont();
            }
            i=0;
            for(int n=1000;n<=10000;n+=1000) {
                int arre[n];
                llenar(arre, n);
                arbol arbol1(n);
                for (int j = 0; j < n; j++)arbol1.insertar(arre[j]);
                arbol1.inorden(arre,0);
                //imprimir(arre, n);
                //cout << endl;
                c[i++]+=arbol1.getcomp();
            }
            cout<<"\nEsfuerzos Calculados\nQuicksort: "<<endl;
            for( i=0;i<10;i++){
                cout<<endl<< a[i];
            }
            cout<<"\nMergesort: "<<endl;
            for( i=0;i<10;i++){
                cout<<endl<< b[i];
            }
            cout<<"\nTreesort: "<<endl;
            for( i=0;i<10;i++){
                cout<<endl<< c[i];
            }
            cout<<"\nAlgoritmos robados de https://github.com/sheldon y https://github.com/grover-almeida"<<endl;

        }break;
    }
    return 0;
}
