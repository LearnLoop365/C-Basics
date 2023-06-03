# Make

## Phony Target

Phony Target `foo` to Build an Executable (Compile & Link)

```
make foo
```

## Make without Target Specified = Make the 1st Target

So, with this makefile,
`make` is equivalent to `make lib/a.o`