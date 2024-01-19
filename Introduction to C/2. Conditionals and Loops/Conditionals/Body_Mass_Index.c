// Let's output the IBM category.

#include <stdio.h>

int main() {
    float BMI;

    scanf("%f", &BMI);

    if(BMI < 18.5){

        printf("Underweight");

    } else if(BMI > 25){

        printf("Overweight");

    } else {

        printf("Normal");

    }
    

    return 0;
}