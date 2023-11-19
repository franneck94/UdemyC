#include <stdint.h>
#include <stdio.h>

struct Car
{
    char brand[50];
    char model[50];
    uint16_t year;
};

int main()
{
    struct Car swift = {.brand = "Suzuki", .model = "Swift", .year = 2013};
    struct Car rs3 = {.brand = "Audi", .model = "RS3", .year = 2023};
    struct Car gt3rs = {.brand = "Porsche", .model = "GT3RS", .year = 2050};

    return 0;
}
