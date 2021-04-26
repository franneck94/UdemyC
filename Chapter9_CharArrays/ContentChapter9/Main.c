#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    // Variante 1
    char prename[20];
    char lastname[20];
    int year;
    int month;
    int day;

    printf("Enter your Prename: ");
    scanf("%20s", prename);
    printf("Enter your Lastname: ");
    scanf("%20s", lastname);
    printf("Enter your Birthday (DD MM YYYY)\n");
    scanf("%2d %2d %4d", &day, &month, &year);
    printf("Name: %s %s, Birthday: %2d %2d %4d", prename, lastname, day, month, year);

    // Variante 2
    char *prename2 = (char *)malloc(20 * sizeof(char));
    char *lastname2 = (char *)malloc(20 * sizeof(char));
    int year2;
    int month2;
    int day2;

    printf("\nEnter your Prename: ");
    scanf("%20s", prename2);
    printf("Enter your Lastname: ");
    scanf("%20s", lastname2);
    printf("Enter your Birthday (DD MM YYYY)\n");
    scanf("%2d %2d %4d", &day2, &month2, &year2);
    printf("Name: %s %s, Birthday: %2d %2d %4d", prename2, lastname2, day2, month2, year2);

    return 0;
}
