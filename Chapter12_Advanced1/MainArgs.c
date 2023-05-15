#include <stdio.h>
#include <stdlib.h>

// argc = Argument Counter
// argv = Argument Values
int main(int argc, char *argv[])
{
    printf("argc: %d\n", argc);

    for (int i = 0; i < argc; i++)
    {
        printf("argv[%d] = %s\n", i, argv[i]);
    }

    if (argc < 2)
    {
        return 1;
    }

    int value = atoi(argv[1]);
    printf("%d\n", value);

    float val2 = (float)atof(argv[2]);
    printf("%f\n", val2);

    double val3;
    sscanf(argv[3], "value=%lf", &val3);
    printf("%lf\n", val3);

    return 0;
}
