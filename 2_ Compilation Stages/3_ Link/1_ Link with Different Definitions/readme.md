# Linking with Different Definitions

## Compile Source Files to Object Files

```
gcc -c -o lib/a.o src/a.c
gcc -c -o lib/b1.o src/b1.c
gcc -c -o lib/b2.o src/b2.c
```

## Link Object Files Differently to Build Different Executables

```
gcc -o build/a1 lib/a.o lib/b1.o
gcc -o build/a2 lib/a.o lib/b2.o
```

## Run Executables
```
build/a1
build/a2
```
