#include <stdio.h>

int main() {
    int a, b;
    char ch;

    printf("Enter 1st Number: ");
    scanf("%d", &a);

    printf("Enter 2nd Number: ");
    scanf("%d", &b);

    printf("Enter the operator (+, -, *, /): ");
    scanf(" %c", &ch); // Note: space before %c

    if (ch == '+')
        printf("Addition is %d", a + b);
    else if (ch == '-')
        printf("Subtraction is %d", a - b);
    else if (ch == '*')
        printf("Multiplication is %d", a * b);
    else if (ch == '/')
        printf("Division is %d", a / b);
    else
        printf("Invalid operator!");

    return 0;
}
