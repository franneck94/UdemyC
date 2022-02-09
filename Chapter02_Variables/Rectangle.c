#include <stdio.h>

int main()
{
    // Rectangle Example
    // 1.) Read the values for a, b from the user
    // 2.) Compute the perimeter and area of the rectangle
    // 3.) Print the computed values to the console

    float a;
    float b;

    // 1.)
    printf("Please enter the value for a: ");
    scanf("%f", &a);
    printf("Please enter the value for b: ");
    scanf("%f", &b);

    // 2.)
    float perimeter = 2 * a + 2 * b;
    float area = a * b;

    // 3.)
    printf("The perimeter is: %f and the area is: %f", perimeter, area);

    return 0;
}
