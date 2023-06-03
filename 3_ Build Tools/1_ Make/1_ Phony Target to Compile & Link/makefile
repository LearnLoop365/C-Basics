.PHONY: foo libDir buildDir

lib/a.o: src/a.c | libDir
	gcc -c -o lib/a.o src/a.c

build/a: lib/a.o | buildDir
	gcc -o build/a lib/a.o

libDir:
	mkdir -p lib

buildDir:
	mkdir -p build

foo:
	$(MAKE) build/a