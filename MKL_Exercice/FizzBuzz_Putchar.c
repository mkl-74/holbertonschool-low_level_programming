#include <stdio.h>

void fizzbuzz(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        if (i % 3 == 0 && i % 5 == 0) {
            putchar('F');
            putchar('i');
            putchar('z');
            putchar('z');
            putchar('B');
            putchar('u');
            putchar('z');
            putchar('z');
            putchar('\n');
        } else if (i % 3 == 0) {
            putchar('F');
            putchar('i');
            putchar('z');
            putchar('z');
            putchar('\n');
        } else if (i % 5 == 0) {
            putchar('B');
            putchar('u');
            putchar('z');
            putchar('z');
            putchar('\n');
        } else {
            printf("%d\n", i);
        }
    }
}

int main() {
    fizzbuzz(100);
    return 0;
}