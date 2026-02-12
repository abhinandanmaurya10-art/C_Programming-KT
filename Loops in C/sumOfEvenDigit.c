#include<stdio.h>
int main (){

    int num, ld;
    printf("Enter any digit: ");
    scanf("%d", &num);

    int sum = 0;

    while(num != 0){
        ld = num % 10;       // Last digit

        if(ld % 2 == 0){     // Check even digit
            sum = sum + ld;  // adding digit
        }

        num = num / 10;      // Remove last digit
    }

    printf("Sum of Even Digits is %d", sum);
    return 0;
}
