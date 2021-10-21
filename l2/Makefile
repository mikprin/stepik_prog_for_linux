lib: solution.h solution.c
	gcc -shared -fPIC -Wl,-rpath,. -o libsolution.so solution.c

all: bin

bin: solution.h main.c lib
	gcc main.c -fPIC -L. -lsolution -o solution

clean:
	-rm hello libsolution.so 2>/dev/null
	-rm *.o 2>/dev/null
	-rm solution 2>/dev/null