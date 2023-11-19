#include <stdio.h>

// char 1byte: 0, 1, 2, ...
// short 2byte: 0, 2, 4, ...
// int 4byte: 0, 4, 8, 12, ...
// float 4byte: 0, 4, 8, 12, ...
// double 8byte: 0, 8, 16, ...

typedef struct
{
    int a;
    char b;
    float c;
} s_data; // 9 (12)

typedef struct
{
    char b;
    int a;
    float c;
} s_data2; // 9 (12)

typedef struct
{
    double c;
    unsigned int d;
    short b;
    char a;
} s_data3; // 15 (16)

typedef struct
{
    double c;
    float a;
    float b;
} s_data4; // 16 (16)

int main()
{
    s_data s;
    printf("Size in byte: %llu\n", sizeof(s));

    s_data2 s2;
    printf("Size in byte: %llu\n", sizeof(s2));

    s_data3 s3;
    printf("Size in byte: %llu\n", sizeof(s3));

    s_data4 s4;
    printf("Size in byte: %llu\n", sizeof(s4));

    return 0;
}
