// Ques: Take a integer input and print it half.


#include<stdio.h>
int main (){

    int x;

    printf("Enter an Interger: ");
    scanf("%d", &x);
    // Typecasting:
    float f = (float)x;
    printf("%.2f", f/2);

   return 0;
}