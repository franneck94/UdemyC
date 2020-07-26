#include <stdio.h>

int main()
{
    float a;
    float b;
    float c;

    printf("Bitte geben Sie im Folgenden den Wert fuer die Variable a ein!\n");
    scanf("%f", &a);
    
    printf("Bitte geben Sie im Folgenden den Wert fuer die Variable b ein!\n");
    scanf("%f", &b);

    c = a * b;
    printf("C = A * B = %f\n", c);


    int x;
    int y;
    int z;

    printf("Bitte geben Sie im Folgenden den Wert fuer die Variable x ein!\n");
    scanf("%d", &x);
    
    printf("Bitte geben Sie im Folgenden den Wert fuer die Variable y ein!\n");
    scanf("%d", &y);

    z = x * y;
    printf("Z = X * Y = %d\n", z);

    return 0;
}