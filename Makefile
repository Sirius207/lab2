

A: A.o
	g++ -o A A.o
A.o: A.cpp a.h
	g++ -c A.cpp
