/*
 * Compile with Function Declaration without Definition
 * No Linking
 * 
 * e.g.
 * gcc -c -o lib/a.o a.c
*/
#include<stdio.h>

int foo(int n1, int n2); // Signature only

int main() {
	int n = foo(2, 3);
	return 0;
}