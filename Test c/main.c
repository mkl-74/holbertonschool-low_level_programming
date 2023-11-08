#include <stdio.h>
#include <stdlib.h>

/**
 *
 *
 *
 *
*/

int main()
{
    int a = 12;
    int b = 9;
    int c = 3;
    int *ptr_a = &a;

    printf("Mes enfants ont %d, %d, et %d ans\n", a, b, c);
    printf("l'adresse de ses 3 variables sont %p pour a, %p pour b et %p pour c\n", &a, &b, &c);
    printf("l'adresse stocké dans le pointeur *ptr_a est %p est sa valeur est l'age de Charlie soit %d ans\n", &ptr_a, a);
return (0);
}