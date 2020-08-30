#include <stdio.h>

int main()
{
    // Rechteck: a, b vom User einlesen
    // Berechne den Umfang und den Flaecheninhalt des Rechtecks
    // Gebe diese Werte dann in der Konsole aus
    float a;
    float b;

    printf("Please enter the value for a:");
    scanf("%f", &a);
    printf("Please enter the value for b:");
    scanf("%f", &b);

    float perimeter = 2 * a + 2 * b;
    float area = a * b;

    printf("The perimeter is %f and the are is %f", perimeter, area);

    return 0;
}