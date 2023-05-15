#include <stdint.h>
#include <stdio.h>

typedef struct
{
    int16_t a;
    float b;
} s1;

typedef struct
{
    float a;
    int16_t b;
} s2;

typedef struct
{
    int8_t a;
    int8_t b;
    int8_t c;
    int8_t d;
    int16_t e;
} s3;

typedef struct
{
    double a;
    int8_t b;
    int8_t c;
    int8_t d;
    int32_t e;
} s4;

int main()
{
    printf("Size in byte: %llu\n", sizeof(s1));
    printf("Size in byte: %llu\n", sizeof(s2));
    printf("Size in byte: %llu\n", sizeof(s3));
    printf("Size in byte: %llu\n", sizeof(s4));

    return 0;
}
