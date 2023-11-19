#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

// Create a License Plate Struct
// Region, Alpha, Numeric Code
// Is H or E license plate?
// Add a date for the TÜV due date

// Create a general car info struct
// The attributes are:
//      The license plate info
//      The car data from above

// Add typedefs for the structs

typedef struct Date
{
    unsigned int year;
    unsigned int month;
    unsigned int day;
} Date_t;

typedef struct LicensePlate
{
    char region_code[3];
    char alpha_code[2];
    char numeric_code[4];
    bool is_historic;
    bool is_electro;
    Date_t tuv_until_date;
} LicensePlate_t;

typedef struct CarBase
{
    char brand[50];
    char model[50];
    uint16_t year;
    uint16_t hp;
} CarBase_t;

typedef struct CarStats
{
    CarBase_t base;
    LicensePlate_t plate;
} CarStats_t;

int main()
{
    const CarStats_t swift = {
        .base = {.brand = "Suzuki", .model = "Swift", .year = 2013, .hp = 90},
        .plate = {.region_code = "BO",
                  .alpha_code = "JS",
                  .numeric_code = "2402",
                  .is_electro = false,
                  .is_historic = false}};
    const CarStats_t rs3 = {
        .base = {.brand = "Audi", .model = "RS3", .year = 2023, .hp = 400},
        .plate = {.region_code = "BO",
                  .alpha_code = "JS",
                  .numeric_code = "2402",
                  .is_electro = false,
                  .is_historic = false}};
    const CarStats_t gt3rs = {
        .base = {.brand = "Porsche", .model = "GT3RS", .year = 2050, .hp = 525},
        .plate = {.region_code = "BO",
                  .alpha_code = "JS",
                  .numeric_code = "2402",
                  .is_electro = true,
                  .is_historic = false}};

    return 0;
}
