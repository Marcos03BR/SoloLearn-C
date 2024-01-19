// Find and output the corresponding letter.

#include <stdio.h>

int main() {
    char word[50];
    int position;
    
    scanf("%s %d", word, &position);

    printf("%c", word[position]);

    return 0;
}