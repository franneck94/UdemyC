#include <stdio.h>

// Size in byte: 12
// Sum in byte: 9
// Padding byte: 3
typedef struct
{
    int a;   // 0-3
    float c; // 4-7
    char b;  // 8
} s_data2;

// Size in byte: 16
// Sum in byte: 15
// Padding byte: 1
typedef struct
{
    double c;       // 0 -7
    unsigned int d; // 8 - 11
    short b;        // 12 - 13
    char a;         // 14
} s_data3;

// Size in byte: 24
// Sum in byte: 18
// Padding byte: 6
typedef struct
{
    double c; // 0 - 7
    float a;  // 8 - 11
    float b;  // 12 - 15
} s_data4;

int main()
{
    s_data2 s2;
    printf("Size in byte: %d\n", sizeof(s2));

    s_data3 s3;
    printf("Size in byte: %d\n", sizeof(s3));

    s_data4 s4;
    printf("Size in byte: %d\n", sizeof(s4));

    return 0;
}