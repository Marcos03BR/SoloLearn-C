// Create an app to calculate the baggage fees.

#include <stdio.h>

void baggage() {
    int weight;
    scanf("%d", &weight);

    int total;

    if (weight <= 23) {
        total = 0;
    } else {
        total = (weight - 23) * 12;
    }

    printf("%d", total);
}

int main() {
    baggage();
    
    return 0;
}