// Create an app to remind about oil changes for your car.

#include <stdio.h>

int main() {
    int mileage;
    int months;

    scanf("%d %d", &mileage, &months);

    if(mileage > 10000 || months > 12){

        printf("Change Oil");

    } else {

        printf("OK");

    }


    return 0;
}