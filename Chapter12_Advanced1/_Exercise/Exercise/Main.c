#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int comp(const void *elem1, const void *elem2)
{
    int l = *((int *)elem1);
    int r = *((int *)elem2);

    if (l > r)
        return 1;
    if (r > l)
        return -1;
    else
        return 0;
}

int main(int argc, char *argv[])
{
}
