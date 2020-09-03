#include <stdio.h>

int main()
{
    int age_jan = 24;
    int age_marc = 42;

    // 1 = true
    // 0 = false

    if (age_jan < age_marc)
    {
        printf("Jan is younger than Marc!");
    }
    else if (age_jan > age_marc)
    {
        printf("Jan is older than Marc!");
    }
    else
    {
        printf("Jan and Marc have the same age!");
    }

    return 0;
}