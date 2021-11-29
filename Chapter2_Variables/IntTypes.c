#include <stdint.h>
#include <stdio.h>

int main()
{
    uint64_t a = UINT64_MAX;
    uint32_t b = UINT32_MAX;
    uint16_t c = UINT16_MAX;
    uint8_t d = UINT8_MAX;

    int64_t e = INT64_MAX;
    int32_t f = INT32_MAX;
    int16_t g = INT16_MAX;
    int8_t h = INT8_MAX;

    printf("%lu", a);
    printf("%u", b);
    printf("%hu", c);
    printf("%u", d);

    printf("%ld", e);
    printf("%d", f);
    printf("%hd", g);
    printf("%hhu", h);

    return 0;
}
