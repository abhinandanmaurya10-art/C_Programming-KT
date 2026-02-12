#include <stdio.h>
int main()
{
    float f;
    printf("Enter a real number: ");
    scanf("%f", &f);

    int x = (float)f;
    float a = (float)x;
    if (f - a == 0)
        printf("Number is Integer: ");
    if (f - a > 0)
        printf("Number is not Integer: ");
         return 0;
}