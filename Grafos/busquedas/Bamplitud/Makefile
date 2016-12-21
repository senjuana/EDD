CC=g++
CFLAGS=-c
output: main.o imple_col.o
	$(CC)  main.o imple_col.o -o hello

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

imple_col.o: imple_col.cpp
	$(CC) $(CFLAGS)  imple_col.cpp
clean:
	rm *.o hello
