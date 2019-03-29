all: TestExecutable

TestExecutable: main.o test1.o test2.o test3.o test4.o test5.o test6.o test7.o
	g++ main.o test1.o test2.o test3.o test4.o test5.o test6.o test7.o -o TestExecutable

main.o: main.cpp
	g++ -c main.cpp

test1.o: test1.cpp
	g++ -c test1.cpp

test2.o: test2.cpp
	g++ -c test2.cpp

test3.o: test3.cpp
	g++ -c test3.cpp

test4.o: test4.cpp
	g++ -c test4.cpp

test5.o: test5.cpp
	g++ -c test5.cpp

test6.o: test6.cpp
	g++ -c test6.cpp

test7.o: test7.cpp
	g++ -c test7.cpp

clean:
	rm -rf *.o TestExecutable    
