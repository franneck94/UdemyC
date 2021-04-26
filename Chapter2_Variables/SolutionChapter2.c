#include <stdio.h>

int main()
{
    unsigned int age;
    unsigned int days;
    unsigned int hours;
    unsigned int minutes;
    unsigned int seconds;

    printf("Please enter your age in years: ");
    scanf("%u", &age);

    days = age * 365u;
    hours = days * 24u;
    minutes = hours * 60u;
    seconds = minutes * 60u;

    printf("You are living since %u days\n", days);
    printf("You are living since %u hours\n", hours);
    printf("You are living since %u minutes\n", minutes);
    printf("You are living since %u seconds\n", seconds);

    return 0;
}
