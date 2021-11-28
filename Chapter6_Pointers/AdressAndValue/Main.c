#include <stdio.h>

int main()
{
    int my_value = 1337;

    // &: Memoryaddress
    printf("Value: %d\n", my_value);
    printf("Memory address: %p\n", &my_value);
    printf("Size: %llu\n", sizeof(my_value));

    return 0;
}
