#include<stdio.h>
#include "b.h"
#include "c.h"

int main(){
    printf("foo(2,3): %d\n", foo(2,3));
    printf("bar(2,3): %d\n", bar(2,3));
    printf("fooz(5): %d\n", fooz(5));
    printf("baz(5): %d\n", baz(5));
    return 0;
}
