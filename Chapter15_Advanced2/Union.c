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
    printf("%llu Byte\n", sizeof(du));
    du.val = 42.5f; // 01000010001010100000000000000000
    printf("%f\n", du.val);
    printf("%d\n", du.id); // 1110048768

    return 0;
}
