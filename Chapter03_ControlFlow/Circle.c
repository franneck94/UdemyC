#include <stdio.h>

#define PI 3.14159f

int main()
{
    // Circle Example
    // 1.) Read the values for a, b from the user,
    //     check if the input is correct (non-negative length)
    // 2.) Compute the perimeter and area of the circle
    // 3.) Print the computed values to the console

    float radius;
    printf("Please enter the radius: ");
    scanf("%f", &radius);

    if (radius < 0.0)
    {
        printf("You entered a negative number! Please re-start the program!");
    }
    else
    {
        float perimeter = 2.0f * radius * PI;
        float area = radius * radius * PI;

        printf("The perimeter is %f and the area is %f", perimeter, area);
    }

    return 0;
}
