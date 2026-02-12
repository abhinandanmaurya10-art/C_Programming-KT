#include <stdio.h>
int main()
{

    float  length, breadth, area, perimeter;

    printf("Enter the Length: ");
    scanf("%f", &length);
    printf("Enter the Length: ");
    scanf("%f", &breadth);

    area = (length * breadth);
    printf("Area of Rectangle is %.2f\n", area);

    perimeter = 2 * (length + breadth);
    printf("Perimeter of Rectangle is %.2f\n", perimeter);

    if (area > perimeter)
        printf("Area is Greater\n");

    if (perimeter > area)
        printf("Perimeter is \n");
        return 0;
}
