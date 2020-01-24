TestSuite: main.o LLTest.o
	g++ -std=c++11 -g -Wall main.o LLTest.o -o TestSuite
main.o: main.cpp LLTest.h
	g++ -std=c++11 -g -Wall -c main.cpp
LLTest.o: LLTest.cpp LinkedList.h Node.h
	g++ -std=c++11 -g -Wall -c LLTest.cpp
clean:
	rm *.o TestSuite
