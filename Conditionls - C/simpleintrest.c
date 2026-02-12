#include<stdio.h>
int main (){
    float p;
     printf("Enter the Principal amount: ");
     scanf("%f", &p);  // scanf use to take input from user

         float r;
     printf("Enter rate offloaterest: ");
     scanf("%f", &r);

        float t;
     printf("Enter Time: ");
     scanf("%f", &t);

    float SI =( p*r*t)/100;

     printf("Simplefloaterest is %.2f",  SI); // %.2f shows 2 decimal places

// ? this is a ternary operator for if
//  : use for else
// condion ? true : false it also true for multiple condition
    return 0;
}