.PHONY: build buildDir

build:
	$(MAKE) build/a

build/a: src/*.c | buildDir
	gcc -I include -o build/a src/*.c

buildDir:
	mkdir -p build
