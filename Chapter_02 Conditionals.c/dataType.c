#include<stdio.h>
int main (){

    char ch = 'A';  // This is a Character.
    printf("%d\n", ch);

    //Each character has a ASCII value [Which is an integer]

    // using typecasting:

    int ascii = (int)ch;
    printf("%d\n", ascii);

    int x = 65;
    printf("%c\n", x); //printing on screen


    return 0;
}