// Calculate and output the number of wins.

#include <stdio.h>

int main() {
    float results[] = {0, 1, 0, 0, 1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 1};
    int wins;

    for(int i=0; i < 28; i++){
        if(results[i] == 1){

            wins += results[i];

        } 

    }

    printf("%d", wins);
    
    return 0;
}