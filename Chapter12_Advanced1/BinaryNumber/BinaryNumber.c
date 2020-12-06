#include <stdio.h>

int main()
{
    int first_leading_one_found = 0;
    int num_bits = 32;
    int decimal_number = 0;

    printf("Please enter an integer number: ");
    scanf("%d", &decimal_number);

    for (int i = num_bits - 1; i >= 0; i--)
    {
        // 9_10 <= user input
        // 1001_2 <=> 9_10

        // i = 3: 1000_2
        //        1001_2
        // result = 1000_2
        // console: 1

        // i = 2: 0100_2
        //        1001_2
        // result = 0000_2
        // console: 0

        // i = 1: 0010_2
        //        1001_2
        // result = 0000_2
        // console: 0

        // i = 0: 0001_2
        //        1001_2
        // result = 0001_2
        // console: 1
        int mask = (1 << i);
        int result = decimal_number & mask;

        if (result != 0)
        {
            if (first_leading_one_found == 0)
            {
                first_leading_one_found = 1;
            }

            printf("1");
        }
        else if (first_leading_one_found == 1)
        {
            printf("0");
        }
    }

    return 0;
}