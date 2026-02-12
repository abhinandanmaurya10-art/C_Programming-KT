#include <stdio.h>
#define PI 3.14159   // Define value of π

int main() {
    float radius, volume;  // Declare variables for radius and volume
  
    // Taking input from user
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    //Formula tp calculate the variables
    volume = (4.0 / 3.0) * PI * radius * radius * radius;

    printf("The Volume of the Sphere is: %.2f\n", volume);

    return 0;
}
