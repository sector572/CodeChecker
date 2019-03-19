all: TestExecutable

TestExecutable: main.o test1.o test2.o 
	g++ main.o test1.o test2.o -o TestExecutable

main.o: main.cpp
	g++ -c main.cpp

test1.o: test1.cpp
	g++ -c test1.cpp

test2.o: test2.cpp
	g++ -c test2.cpp

clean:
	rm -rf *.o TestExecutable    