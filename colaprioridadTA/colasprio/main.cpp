#include <bits/stdc++.h>
#include "colaprio.h"

using namespace std;

int main(){
  int menu;
  srand(time(NULL));
  cola m(10);
  do{
    cout<<"Cola existente: ";
    m.print();

    cout << "Ingresar a la cola: 1" << endl;
    cout << "Atender la cola: 2" << endl;
    cout << "Salir: 3" << endl;
    cin >> menu;
  switch (menu) {
    case 1:{
        int x = rand() % 10001;
        cout<<"id: "<<x<<" ";
        char c;
        cout << "Ingresa la prioridad: ";
        cin >> c;
        if(c=='a'||c=='A'||c=='m'||c=='M'||c=='b'||c=='B'){
          m.encolar(x,c);
        }else{cout <<" Ingresa una prioridad Valida"<< endl;}
    }break;
    case 2:{
        if(m.desencolar())cout <<"Se atendio con exito"<<endl;
        else cout<<"No hay nadie para atender"<<endl;
    }break;
    case 3:{
        m.~cola();
    }break;
  }

}while(menu !=3);

return 0;
}
