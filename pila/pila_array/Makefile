CC=g++
CFLAGS=-c
EJECUTABLE=pila


output: main.o 
	$(CC) main.o -o $(EJECUTABLE) && rm *.o
	
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

imple_pila.o: imple_pila.cpp
	$(CC) $(CFLAGS)  imple_pila.cpp
clean:
	rm $(EJECUTABLE)
