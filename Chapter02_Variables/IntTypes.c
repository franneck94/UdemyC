#include <stdint.h>
#include <stdio.h>

int main()
{
    uint64_t a1 = 0;
    uint32_t b1 = 0;
    uint16_t c1 = 0;
    uint8_t d1 = 0;

    int64_t a2 = 0;
    int32_t b2 = 0;
    int16_t c2 = 0;
    int8_t d2 = 0;

    printf("%llu", a1);
    printf("%lld", a2);

    printf("%u", b1);
    printf("%d", b2);

    printf("%hu", c1);
    printf("%hd", c2);

    printf("%hhu", d1);
    printf("%hhd", d2);

    return 0;
}
