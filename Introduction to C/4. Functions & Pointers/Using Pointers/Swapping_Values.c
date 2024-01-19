// Let's solve a classical programming challenge.

#include <stdio.h>

void swap(int *a, int *b) {
    
    int temp = *a;

    *a = *b;

    *b = temp;
}

int main() {
    int x, y;

    scanf("%d %d", &x, &y);

    printf("x is %d, y is %d\n", x, y);
    swap(&x, &y);
    printf("x is %d, y is %d\n", x, y);

    return 0;
}