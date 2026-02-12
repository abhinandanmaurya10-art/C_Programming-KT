// Given a point (𝑥,𝑦)
// (x,y), write a program to find out 
// if it lies in the 1st Quadrant, 2nd Quadrant,
// 3rd Quadrant, 4th Quadrant, 
// on the x-axis, y-axis, or at the origin (0, 0).


#include <stdio.h>

int main() {
    float x, y;

    // Input coordinates
    printf("Enter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of y: ");
    scanf("%f", &y);

    // Check position of the point
    if (x == 0 && y == 0)
        printf("Point lies at the Origin (0, 0).\n");
    else if (x == 0)
        printf("Point lies on the Y-axis.\n");
    else if (y == 0)
        printf("Point lies on the X-axis.\n");
    else if (x > 0 && y > 0)
        printf("Point lies in the 1st Quadrant.\n");
    else if (x < 0 && y > 0)
        printf("Point lies in the 2nd Quadrant.\n");
    else if (x < 0 && y < 0)
        printf("Point lies in the 3rd Quadrant.\n");
    else if (x > 0 && y < 0)
        printf("Point lies in the 4th Quadrant.\n");

    return 0;
}
