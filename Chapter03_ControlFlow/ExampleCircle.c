#include <stdio.h>

#define PI 3.14159f

int main()
{
    // Circle Example
    // 1.) Read the values for r from the user,
    //     check if the input is correct (non-negative length)
    // 2.) Compute the perimeter and area of the circle
    // 3.) Print the computed values to the console

    float r = 0.0F;

    printf("Please enter the radius: ");
    scanf("%f", &r);

    if (r < 0.0F)
    {
        printf("Radius must be >= 0!\n");
        return 1;
    }

    float area = r * r * PI;
    float perimeter = 2 * PI * r;

    printf("Area: %f\n", area);
    printf("Perimeter: %f\n", perimeter);

    return 0;
}
