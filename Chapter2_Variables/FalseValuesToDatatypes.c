#include <stdio.h>

int main()
{
    // 1 char = 8bit = 1byte, 2^8 = 256

    // -128, 127
    char c_value = 200;
    // 0, 255
    unsigned char uc_value = 200;

    unsigned int ui_value = -26;

    printf("%d\n", c_value);
    printf("%d\n", uc_value);
    printf("%d\n", ui_value);

    return 0;
}