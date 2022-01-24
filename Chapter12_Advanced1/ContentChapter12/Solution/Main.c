#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comp(const void *elem1, const void *elem2)
{
    int l = *((int *)elem1);
    int r = *((int *)elem2);

    if (l < r)
        return 1;
    if (r < l)
        return -1;
    else
        return 0;
}

int main(int argc, char *argv[])
{
    if (argc == 1)
    {
        printf("You have to enter 3 args!\n");
        return 1;
    }

    FILE *fp = fopen(argv[1], "r");
    if (NULL == fp)
    {
        printf("File %s does not exist!\n", argv[1]);
        return 1;
    }

    int length = atoi(argv[2]);
    int *data = (int *)malloc(length * sizeof(int));

    for (unsigned int i = 0; i < length; i++)
    {
        fscanf(fp, "%d", &data[i]);
        printf("%d\n", data[i]);
    }

    fclose(fp);
    printf("\n");
    fp = fopen(argv[1], "w");

    qsort(data, length, sizeof(int), comp);

    for (unsigned int i = 0; i < length; i++)
    {
        fprintf(fp, "%d\n", data[i]);
        printf("%d\n", data[i]);
    }
}
