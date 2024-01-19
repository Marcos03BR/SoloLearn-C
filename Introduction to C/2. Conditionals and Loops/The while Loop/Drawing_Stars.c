// Create a program to draw star symbols.

#include <stdio.h>

int main() {
    int stars;

    scanf("%d", &stars);

    while(stars > 0){

        printf("*");
        stars--;

    }
    
    return 0;
}