#include <assert.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

#include <pthread.h>

#define NUM_THREADS 10
#define NUM_ITERATIONS 100000
#define USE_MUTEX
#define EXPECTED_RESULT (NUM_THREADS * NUM_ITERATIONS)

int32_t global_counter = 0;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

void *function(void *args)
{
    const int32_t arg_i32 = *((int *)(args));

    printf("Argument: %d\n", arg_i32);

    int *result = (int *)malloc(sizeof(int));
    *result = arg_i32 * 2;

    int32_t local_counter = 0;

    for (int32_t i = 0; i < NUM_ITERATIONS; ++i)
    {
        ++local_counter;
    }

    pthread_mutex_lock(&mutex);
    global_counter += local_counter;
    pthread_mutex_unlock(&mutex);

    pthread_exit((void *)(result));
}

int main()
{
    pthread_t threads[NUM_THREADS];

    int32_t inputs[NUM_THREADS];
    int32_t *results[NUM_THREADS];

    for (int32_t i = 0; i < NUM_THREADS; ++i)
    {
        inputs[i] = i;
    }

    for (int32_t i = 0; i < NUM_THREADS; ++i)
    {
        pthread_create(&threads[i], NULL, &function, (void *)(&inputs[i]));
    }

    // ...

    for (int32_t i = 0; i < NUM_THREADS; ++i)
    {
        pthread_join(threads[i], (void *)(&results[i]));
    }

    for (int32_t i = 0; i < NUM_THREADS; ++i)
    {
        printf("Result1: %d\n", *results[i]);
    }

    printf("Counter: %d\n", global_counter);

    assert(EXPECTED_RESULT == global_counter);

    return 0;
}
