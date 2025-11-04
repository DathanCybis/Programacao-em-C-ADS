#include <stdio.h>

void main() {
    int n = 5;
    int *p = &n;
    /* adicionar funcao printf */

    printf ("%d\n", p);
    printf ("%d\n", *p);
    printf ("%d\n", &p);
    printf ("%p\n", p);
    printf ("%pointer\n", p);
}
