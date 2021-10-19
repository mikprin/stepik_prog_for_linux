all: bin

bin: solution.h main.c lib
	gcc main.c -fPIC -L. -lsolution -o solution

lib: solution.h solution.c
	gcc -shared solution.c -fPIC -o libsolution.so

clean:
	-rm hello libsolution.so 2>/dev/null
	-rm *.o 2>/dev/null