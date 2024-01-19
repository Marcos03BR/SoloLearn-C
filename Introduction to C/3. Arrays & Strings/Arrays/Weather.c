// Output the average temperature for a given month.

#include <stdio.h>

int main() {
    float t[] = {10.3, 15.4, 21.8, 22.5, 25.1, 27.4, 28.8, 27.9, 20.1, 22, 19.4, 14.2};

    int num;
    scanf("%d", &num);

    printf("%f", t[num]);

    return 0;
}