#include <stdio.h>

int main()
{
    int age_jan = 16;
    int age_marc = 17;
    int age_sarah = 18;

    // Whats age is div. with 2
    // a % 2 == 0

    if ((age_jan % 2) == 0)
    {
        printf("Jan's age is even!\n");
    }
    else
    {
        printf("Jan's age is odd!\n");
    }

    if ((age_marc % 2) == 0)
    {
        printf("Marc's age is even!\n");
    }
    else
    {
        printf("Marc's age is odd!\n");
    }

    if ((age_sarah % 2) == 0)
    {
        printf("Sarah's age is even!\n");
    }
    else
    {
        printf("Sarah's age is odd!\n");
    }

    return 0;
}