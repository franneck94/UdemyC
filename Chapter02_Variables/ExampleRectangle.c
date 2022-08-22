#include <stdio.h>

int main()
{
    // Rectangle Example
    // 1.) Read the values for a, b from the user
    // 2.) Compute the perimeter and area of the rectangle
    // 3.) Print the computed values to the console

    float a = 0.0F;
    float b = 0.0F;

    printf("Please enter the value for a: ");
    scanf("%f", &a);
    printf("\n");
    printf("Please enter the value for b: ");
    scanf("%f", &b);
    printf("\n");

    float perimeter = 2 * a + 2 * b;
    float area = a * b;

    printf("Perimeter: %f\n", perimeter);
    printf("Area: %f\n", area);

    return 0;
}
