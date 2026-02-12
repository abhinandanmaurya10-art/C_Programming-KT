#include <stdio.h>
int main()
{
    float x = 15;
    float y = 7;
    //   printf("%.2f\n %.2f\n", x , y);

  // Perform arithmetic operations
    printf("Addition: %d\n", x + y);
    printf("Subtraction: %d\n", x - y);
    printf("Multiplication: %d\n", x * y);
    printf("Division: %.2f\n",(float)x / y);

    // we use float data type to store decimal value
    // Modulus Operator (only works with integers)
    int a = 15;
    int b = 7;
    int z = a % b; // Remainder of 15 divided by 7

    printf("%d", z);

    // lekin jb a%b = a [ if a<b]
    // tab modulus = a ho jata hai

    return 0;
}
