CXX =g++
CFLAGS=-g -Wall -c
EJECUTABLE=cola
OBJS= main.o

output: $(OBJS)
	$(CXX)  $(OBJS) -o $(EJECUTABLE) && rm $(OBJS)
	
main.o: main.cpp 
	$(CXX) $(CFLAGS) main.cpp

clean:
	rm $(EJECUTABLE)
