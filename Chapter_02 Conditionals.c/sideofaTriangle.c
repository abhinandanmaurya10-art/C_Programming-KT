#include <stdio.h>
int main()
{
    int side1, side2, side3;
    printf("Enter the  side1 of triangle: ");
    scanf("%d", &side1);
    printf("Enter the  side2 of triangle: ");
    scanf("%d", &side2);

    printf("Enter the  side3 of triangle: ");
    scanf("%d", &side3);

    if (side1 + side2 > side3 && side2 + side3 > side1 && side1 + side3 > side2)
        printf("This is a valid Traiangle");
    else
        printf("Not a valid traingle");
    return 0;
}
