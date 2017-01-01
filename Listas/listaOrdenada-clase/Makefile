CXX=g++
CFLAGS=-g -Wall -c
EJECUTABLE=lista
OBJS=imple_orde.o main.o

output: $(OBJS)
	$(CXX)  $(OBJS) -o $(EJECUTABLE) && rm $(OBJS)
	
main.o: main.cpp
	$(CXX) $(CFLAGS) main.cpp

imple_list.o: imple_orde.cpp
	$(CXX) $(CFLAGS)  imple_orde.cpp
clean:
	rm $(EJECUTABLE)
