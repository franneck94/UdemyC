#include <stdio.h>

int main()
{
    // Increment: a = a + 1 <=> a += 1 <=> a++
    // Decrement: a = a - 1 <=> a -= 1 <=> a--

    int i = 0;
    i = i + 1; // 1
    i += 1;    // 2
    i++;       // 3
    printf("%d\n", i);

    i = i - 1; // 2
    i -= 1;    // 1
    i--;       // 0
    printf("%d\n", i);

    return 0;
}
