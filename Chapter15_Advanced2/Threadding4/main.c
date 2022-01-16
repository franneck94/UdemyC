#include <stdio.h>
#include <stdlib.h>

#include <pthread.h>

#define NUM_THREADS 3

void *function(void *args)
{
    const int arg_i32 = *(int *)(args);

    printf("Argument: %d\n", arg_i32);

    int *result = (int *)malloc(sizeof(int));
    *result = arg_i32 * 2;

    pthread_exit((void *)result);
}

int main()
{
    pthread_t threads[NUM_THREADS];

    int inputs[NUM_THREADS];
    int *results[NUM_THREADS];

    for (int i = 0; i < NUM_THREADS; i++)
    {
        inputs[i] = i;
    }

    for (int i = 0; i < NUM_THREADS; i++)
    {
        pthread_create(&threads[i], NULL, &function, (void *)(&inputs[i]));
    }

    for (int i = 0; i < NUM_THREADS; i++)
    {
        pthread_join(threads[i], (void *)&results[i]);
    }

    for (int i = 0; i < NUM_THREADS; i++)
    {
        printf("Result1: %d\n", *results[i]);
    }

    return 0;
}
