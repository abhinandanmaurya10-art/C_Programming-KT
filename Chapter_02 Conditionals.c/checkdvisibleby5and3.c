#include <stdio.h>
int main()
{
    int num;
    printf("Enter a Positive Integer: ");
    scanf("%d", &num);

    if (num % 5 == 0 && num % 3 == 0){
        printf("Number is Divisible by 5 and 3");
    }
        else{
        printf("Not Divisible by 5 and 3");
    }

    return 0;
}