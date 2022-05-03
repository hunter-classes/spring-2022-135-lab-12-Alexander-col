main: main.o funcs.o
	g++ -o main funcs.o main.o


clean: 
	rm -f main.o funcs.o tests.o