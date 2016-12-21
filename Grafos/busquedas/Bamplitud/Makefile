output: main.o imple_col.o
	g++ main.o imple_col.o -o hello
main.o: main.cpp
	g++ -c main.cpp
imple_col.o: imple_col.cpp
	g++ -c imple_col.cpp
clean:
	rm *.o hello

