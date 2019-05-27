all: bin/geometry

bin/geometry: build/src/main.o build/src/func.o
	gcc -Wall -Werror build/src/main.o build/src/func.o -o bin/geometry -lm 

build/src/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/src/main.o

build/src/func.o: src/func.c
	gcc -Wall -Werror -c src/func.c -o build/src/func.o



test: bin/geometry_test

bin/geometry_test: build/test/main.o build/test/func.o
	gcc -Wall -Werror build/test/main.o build/test/func.o -o bin/geometry_test -lm

build/test/main.o: test/main.c
	gcc -Wall -Werror -c -I thirdparty -I src test/main.c -o build/test/main.o

build/test/func.o: src/func.c src/geom.h
	gcc -Wall -Werror -c -I thirdparty -I src src/func.c -o build/test/func.o



.PHONY: clean
clean:
	rm -rf build/src/*.o bin/geometry
	rm -rf build/test/*.o bin/test