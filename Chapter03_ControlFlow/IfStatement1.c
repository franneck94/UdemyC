#include <stdbool.h>
#include <stdio.h>

int main()
{
    int age_jan = 30;
    int age_marc = 30;

    // if ((age_jan < age_marc) == true)
    // if (age_jan < age_marc == true)
    if (age_jan < age_marc)
    {
        printf("Jan is younger than Marc.\n");
    }
    else if (age_jan > age_marc)
    {
        printf("Marc is younger than Jan.\n");
    }
    else
    {
        printf("Jan and Marc have the same age.\n");
    }

    return 0;
}
