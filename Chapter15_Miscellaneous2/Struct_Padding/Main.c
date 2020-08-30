#include <stdio.h>

typedef struct
{
    int a; // 32bit = 4byte
    char b; // 8bit = 1byte
    float c; // 32bit = 4byte
} s_data; // 9


// int 4byte: 0, 4, 8, 12, ...
// char 1byte: 0, 1, 2, ...
// float 4byte: 0, 4, 8, 12, ...
typedef struct
{
    int a; // 0-3
    char b; // 4
    char padding[3]; // 5,6,7
    float c; // 8-11
} s_data2; // 12


typedef struct
{
    char a; // 0
    char padding1; // 1
    short b; // 2-3
    char padding2[4];
    double c; // 8-15
    unsigned int d; // 16-19
} s_data3; // 24


typedef struct
{
    float a; // 0-3
    float b; // 4-7 
    double c; // 8-15
} s_data4; // 16


int main()
{
    s_data s;
    printf("Size in byte: %d\n", sizeof(s));

    s_data2 s2;
    printf("Size in byte: %d\n", sizeof(s2));

    s_data3 s3;
    printf("Size in byte: %d\n", sizeof(s3));

    s_data4 s4;
    printf("Size in byte: %d\n", sizeof(s4));

    return 0;
}