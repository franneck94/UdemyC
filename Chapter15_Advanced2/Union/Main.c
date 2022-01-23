#include <stdint.h>
#include <stdio.h>

typedef struct
{
    int32_t id;
    float val;
} data_struct_t;

typedef union
{
    int32_t id;
    float val;
} data_union_t;

int main()
{
    data_struct_t ds = {.id = 0, .val = 42.0f};
    printf("%llu Byte\n", sizeof(ds));

    data_union_t du;
    du.id = 1;        // 0b101010101
    du.val = 1337.0f; // 0b101010101
    printf("%llu Byte\n", sizeof(du));

    printf("%d\n", du.id);
    printf("%f\n", du.val);

    return 0;
}
