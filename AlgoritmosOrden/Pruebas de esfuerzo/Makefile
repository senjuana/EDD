CXX=g++
CFLAGS=-g -Wall -c
EJECUTABLE=Esfuerzo
OBJS=arbol.o algoritmos.o main.o

output: $(OBJS)
	$(CXX)  $(OBJS) -o $(EJECUTABLE) && rm $(OBJS)
	
main.o: main.cpp
	$(CXX) $(CFLAGS) main.cpp

algoritmos: algoritmos.cpp
	$(CXX) $(CFLAGS) algoritmos.cpp

arbol: albol.cpp
	$(CXX) $(CFLAGS) arbol.cpp
clean:
	rm $(EJECUTABLE)
