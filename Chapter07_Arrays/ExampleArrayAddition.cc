#include <stdint.h>
#include <stdio.h>

int main()
{
    float vector1[3] = {0.0f, 0.0f, 0.0f};
    float vector2[3] = {0.0f, 0.0f, 0.0f};
    float result[3] = {0.0f, 0.0f, 0.0f};

    for (uint32_t i = 0; i < 3; ++i)
    {
        printf("%f\n", vector1[i]);
    }
    printf("\n\n");

    for (uint32_t i = 0; i < 3; ++i)
    {
        printf("%f\n", vector1[i]);
    }
    printf("\n\n");

    printf("Enter the values for vector 1: \n");
    for (uint32_t i = 0; i < 3; ++i)
    {
        scanf("%f", &vector1[i]);
    }

    printf("Enter the values for vector 2: \n");
    for (uint32_t i = 0; i < 3; ++i)
    {
        scanf("%f", &vector2[i]);
    }

    for (uint32_t i = 0; i < 3; ++i)
    {
        result[i] = vector1[i] + vector2[i];
    }

    for (uint32_t i = 0; i < 3; ++i)
    {
        printf("v1[%d] + v2[%d] = %f\n", i, i, result[i]);
    }

    return 0;
}
