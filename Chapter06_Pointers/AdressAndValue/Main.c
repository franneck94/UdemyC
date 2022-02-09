#include <stdio.h>

int main()
{
    int my_value = 1337;

    // &: Memoryaddress
    printf("Value: %d\n", my_value);
    printf("Memory address: %p\n", (void *)(&my_value));
    printf("Size: %lu\n", sizeof(my_value));

    return 0;
}
