// Make a program to control a game.

#include <stdio.h>

int main() {
    char dir;

    scanf("%c", &dir);

    switch(dir){

        case 'w':
        printf("Up");
        break;
        case 's':
        printf("Down");
        break;
        case 'a':
        printf("Left");
        break;
        case 'd':
        printf("Right");
        break;
        default:
        printf("Wrong");

    }

    return 0;
}