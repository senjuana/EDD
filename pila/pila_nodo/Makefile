CXX =g++
CFLAGS=-g -Wall -c
EJECUTABLE=pila
OBJS= main.o

output: $(OBJS)
	$(CXX)  $(OBJS) -o $(EJECUTABLE) && rm $(OBJS)
	
main.o: main.cpp pila.h
	$(CXX) $(CFLAGS) main.cpp

imple_pila.o: imple_pila.cpp pila.h
	$(CXX) $(CFLAGS)  imple_pila.cpp
clean:
	rm $(EJECUTABLE)
