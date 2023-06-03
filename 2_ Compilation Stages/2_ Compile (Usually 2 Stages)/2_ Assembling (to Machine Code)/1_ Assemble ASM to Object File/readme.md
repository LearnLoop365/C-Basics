# Assemble ASM to Object File (Machine Code)

## Preparation: Getting ASM Code for your Environment
### Compile C Source to ASM

```
gcc -S -o asm/a.s a.c
```

## Then, Assemble it to Object File

```
gcc -c -o lib/a.o asm/a.s
```
