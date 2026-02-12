// Else Statement:
// 1. Used alongside after 'if statement:
// 2. if your 'if' statement fails then else statement runs:

#include <stdio.h>
int main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);

    if (x > 0)
        printf("Positive Number");
    if (x < 0)
        printf("Negative  Number");
     else 
        printf("Number is Zero");
        return 0;

   
}