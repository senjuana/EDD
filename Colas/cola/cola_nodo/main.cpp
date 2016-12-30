#include "cola.h"

int main(){
    cola < int >  m(20);
    m.Enqueue(15);
    m.Enqueue(13);
    m.Enqueue(10);
    m.Enqueue(134);
    m.Enqueue(8);
    m.Enqueue(1);
    m.Enqueue(0);

    m.printQueue();
    cout<<endl;

    m.Dequeue();
    m.Dequeue();

    m.printQueue();

    return 0;
}
