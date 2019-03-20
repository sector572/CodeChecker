all: TestExecutable

TestExecutable: main.o test1.o test2.o test3.o
	g++ main.o test1.o test2.o test3.o -o TestExecutable

main.o: main.cpp
	g++ -c main.cpp

test1.o: test1.cpp
	g++ -c test1.cpp

test2.o: test2.cpp
	g++ -c test2.cpp

test3.o: test3.cpp
	g++ -c test3.cpp

clean:
	rm -rf *.o TestExecutable    
