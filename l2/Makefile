all: bin

bin: main.c lib
	gcc solution.c -fPIC -L. -lsolution -o hello

lib: solution.h solution.c
	gcc -shared hello.c -fPIC -o libHello.so

clean:
	-rm hello libsolution.so 2>/dev/null
	-rm *.o 2>/dev/null