#include <stdint.h>
#include <stdio.h>

typedef union
{
    int32_t id;
    float val;
} data_t;

int main()
{
    data_t d;

    d.id = 12;
    d.val = 12.0f;

    printf("%d\n", d.id);
    printf("%f\n", d.val);

    d.val = 12.0f;
    d.id = 12;

    printf("%d\n", d.id);
    printf("%f\n", d.val);

    return 0;
}
