#include <stdbool.h>
#include <stdio.h>

int main()
{
    float user_input;
    float sum = 10.0f;

    do
    {
        scanf("%f", &user_input);

        if (user_input < 0.0)
        {
            break;
        }

        sum += user_input;
    } while (sum < 10.0f);

    printf("sum: %f\n", sum);

    return 0;
}
