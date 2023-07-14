#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

// Structure to pass data to the thread
typedef struct {
    int* counter;
    int thread_id;
    pthread_mutex_t* mutex;
} ThreadData;

// Thread function
void* threadFunction(void* arg) {
    ThreadData* data = (ThreadData*)arg;
    int thread_id = data->thread_id;
    int* counter = data->counter;
    pthread_mutex_t* mutex = data->mutex;

    // Locking the mutex before accessing the counter
    pthread_mutex_lock(mutex);

    // Accessing the counter
    printf("Thread %d: Counter value: %d\n", thread_id, *counter);

    // Unlocking the mutex after accessing the counter
    pthread_mutex_unlock(mutex);

    pthread_exit(NULL);
}

int main() {
    int* counter = (int*)malloc(sizeof(int));
    // If memory allocation is not successful.
    if (counter == NULL) {
        printf("Failed to allocate memory. Exiting...\n");
        return 1;
    }

    // Setting initial value to 0.
    *counter = 0;

    // Creat an array of threads and thread data
    const int num_threads = 3;
    pthread_t threads[num_threads];
    ThreadData thread_data[num_threads];

    // Creating a mutex
    pthread_mutex_t mutex;
    pthread_mutex_init(&mutex, NULL);

    // Creating threads
    for (int i = 0; i < num_threads; i++) {
        thread_data[i].counter = counter;
        thread_data[i].thread_id = i;
        thread_data[i].mutex = &mutex;
        pthread_create(&threads[i], NULL, threadFunction, (void*)&thread_data[i]);
    }

    // Waiting for threads to finish
    for (int i = 0; i < num_threads; i++) {
        pthread_join(threads[i], NULL);
    }

    // Destroying the mutex
    pthread_mutex_destroy(&mutex);

    // Freeing the allocated memory
    free(counter);

    return 0;
}
