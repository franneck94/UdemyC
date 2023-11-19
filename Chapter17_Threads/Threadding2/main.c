#include <stdint.h>
#include <stdio.h>

#include <pthread.h>

void *function(void *args)
{
    const int32_t arg_i32 = *((int *)(args));

    printf("Argument: %d\n", arg_i32);

    return NULL;
}

int main()
{
    pthread_t thread1;
    pthread_t thread2;

    int32_t input1 = 1;
    int32_t input2 = 2;

    pthread_create(&thread1, NULL, &function, (void *)(&input1));
    pthread_create(&thread2, NULL, &function, (void *)(&input2));

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    return 0;
}
