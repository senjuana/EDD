CC=g++
CFLAGS=-c
EJECUTABLE=lista


output: main.o 
	$(CC)  main.o -o $(EJECUTABLE) && rm *.o
	
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

imple_list.o: imple_list.cpp
	$(CC) $(CFLAGS)  imple_list.cpp
clean:
	rm $(EJECUTABLE)
