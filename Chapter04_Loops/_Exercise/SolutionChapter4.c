#include <stdio.h>

int main()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (j == 0)
            {
                printf("<\t");
            }
            else if (j == 5)
            {
                printf(">\t");
            }
            else if (i == 0)
            {
                printf("  ^\t");
            }
            else if (i == 5)
            {
                printf("  v\t");
            }
            else
            {
                printf("(%d,%d)\t", i, j);
            }
        }

        printf("\n");
    }

    return 0;
}
