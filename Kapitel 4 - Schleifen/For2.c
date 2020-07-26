#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 3 * 2 * 4 = 6 * 4 = 24
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                printf("%d/%d/%d!\n", i, j , k);
            }
        }
    }

    return 0;
}