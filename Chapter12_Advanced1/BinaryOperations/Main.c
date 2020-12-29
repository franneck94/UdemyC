#include <stdio.h>
#include <stdint.h>

int main()
{
    // 14
    int a = 15;
    int b = 12;

    // &: AND
    // |: OR
    // ^: XOR
    // ~: Complement
    // >>: Right Shift
    // <<: Left Shift

    int a_and_b = a & b;
    // 0b1110;
    // 0b1010;
    // = 1010 = 10
    printf("%d\n", a_and_b);

    int a_or_b = a | b;
    // 0b1110;
    // 0b1010;
    // = 1110 = 14
    printf("%d\n", a_or_b);

    int a_xor_b = a ^ b;
    // 0b1110;
    // 0b1010;
    // = 0100 = 4
    printf("%d\n", a_xor_b);

    uint8_t a_complement = ~a;
    // 0b00001110;
    //   11110001 = 1 + 16 + 32+ 64+ 128
    printf("%d\n", a_complement);

    uint8_t a_right_shift = a >> 1;
    // 0b00001110;
    // 0b00000111 = 7
    printf("%d\n", a_right_shift);

    uint8_t a_left_shift = a << 1;
    // 0b00001110;
    // 0b00011100 = 28
    printf("%d\n", a_left_shift);

    return 0;
}