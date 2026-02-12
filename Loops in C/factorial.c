#include<stdio.h>

 int main(){

    int num, fact;

    printf("Enter any number: ");
    scanf("%d", &num);

    fact = 1;
    for(int i = 1; i<=num; i++){
        fact = fact*i;
  

    }

 printf("Factorial of given numbeer is: %d\n", fact);

 // agar hum print wali conditio  same loop ke ander rakh de tb
 // ye print hoga.
//  Enter any number: 5
// Factorial of given numbeer is: 1
// Factorial of given numbeer is: 2
// Factorial of given numbeer is: 6
// Factorial of given numbeer is: 24
// Factorial of given numbeer is: 120
}