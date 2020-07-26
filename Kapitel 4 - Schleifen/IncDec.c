#include <stdio.h>

int main()
{
    int a = 1;

    // Increment: i = i + 1     <=> i += 1        <=>    i++
    // Decrement: i = i - 1     <=>  i -= 1       <=>    i--

    printf("Starting!\n");

    printf("Finished round %d\n", a);
    a++;

    printf("Finished round %d\n", a);
    a++;

    printf("Finished round %d\n", a);
    a++;

    return 0;
}