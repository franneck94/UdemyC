#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    // argc = Argument Counter
    // argv = Argument Values
    printf("argc: %d\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    int value = atoi(argv[1]);
    printf("%d\n", value);

    float val2 = atof(argv[2]);
    printf("%f\n", val2);

    double val3;
    sscanf(argv[3], "%lf", &val3);
    printf("%lf\n", val3);

    return 0;
}
