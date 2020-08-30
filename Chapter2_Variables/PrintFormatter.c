#include <stdio.h>

int main()
{
    // d or i	Signed decimal integer
    // u	    Unsigned decimal integer
    // 1 char = 8bit = 1byte, 2^8 = 256

    // -128, 127
    char c_value = 200;
    // 0, 255
    unsigned char uc_value = 200;
    // 0, 4.294.967.295
    // 4.294.967.295 + (-26) + 1
    unsigned int ui_value = -26;

    printf("%i\n", c_value);
    printf("%u\n", uc_value);
    printf("%u\n", ui_value);

    return 0;
}