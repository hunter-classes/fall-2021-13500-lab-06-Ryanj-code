main: main.o funcs.o caesar.o
	g++ -o main main.o funcs.o caesar.o

tests: tests.o funcs.o caesar.o
	g++ -o tests tests.o funcs.o caesar.o

test-ascii: test-ascii.o
	g++ -o test-ascii test-ascii.o


main.o: main.cpp funcs.h caesar.h

tests.o: tests.cpp doctest.h funcs.h caesar.h

funcs.o: funcs.cpp funcs.h

test-ascii.o: test-ascii.cpp

caesar.o: caesar.cpp caesar.h


clean:
	rm -f main.o tests.o test-ascii.o caesar.o
