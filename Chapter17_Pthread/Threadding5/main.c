#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

#include <pthread.h>

#define NUM_THREADS 10
#define NUM_INCREMENTS 100000
#define EXPECTED_RESULT (NUM_THREADS * NUM_INCREMENTS)
#define USE_MUTEX

int global_counter = 0;
pthread_mutex_t mutex1 = PTHREAD_MUTEX_INITIALIZER;

void *function(void *args)
{
    int arg_i32 = *(int *)(args);
    int *result = (int *)malloc(sizeof(int));
    *result = arg_i32 * 2;

    for (int i = 0; i < NUM_INCREMENTS; i++)
    {
#ifdef USE_MUTEX
        pthread_mutex_lock(&mutex1);
        global_counter++;
        pthread_mutex_unlock(&mutex1);
#else
        global_counter++;

#endif
    }

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

    printf("global_counter: %d\n", global_counter);

    assert(global_counter == EXPECTED_RESULT);

    return 0;
}
