#include <stdbool.h>
#include <stdio.h>

// break: end the loop
// continue: end the current iteration

int main()
{
    float user_input;
    float sum = 0.0f;

    while (true)
    {
        scanf("%f", &user_input);

        if (user_input > 10.0)
        {
            continue;
        }

        if (user_input < 0.0)
        {
            break;
        }

        sum += user_input;
    }

    printf("sum: %f\n", sum);

    return 0;
}
