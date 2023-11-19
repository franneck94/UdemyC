#include <stdio.h>

int main()
{
    int age_jan = 28;
    int mod = 2;

    if ((age_jan % mod) == 0)
    {
        printf("Jan's age is div. by %d\n", mod);
    }
    else
    {
        printf("Jan's age is not div. by %d\n", mod);
    }

    return 0;
}
