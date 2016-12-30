CC=g++
CFLAGS=-c
EJECUTABLE=cola


output: main.o
	$(CC)  main.o -o $(EJECUTABLE) && rm *.o
	
main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

imple_col.o: imple_col.cpp
	$(CC) $(CFLAGS)  imple_col.cpp
clean:
	rm $(EJECUTABLE)
