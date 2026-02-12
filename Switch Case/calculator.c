#include <stdio.h>

int main()
{
    int a, b;
    char ch;

    printf("Enter 1st Number: ");
    scanf("%d", &a);

    printf("Enter 2nd Number: ");
    scanf("%d", &b);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &ch); // Note: space before %c

    switch (ch)
    {
    case '+':
        printf("Addition is %d", a + b);
        break;

    case '-':
        printf("Subtraction is %d", a - b);
        break;

    case '*':
        printf("Multiplication is %d", a * b);
        break;
    case '/':
        printf("Division is %d", a / b);
        break;
    default:
        printf("Invalid operator!");
        break;

        return 0;
    }
}
