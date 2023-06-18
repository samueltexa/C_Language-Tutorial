#include <stdio.h>
#include <stdlib.h>

int main() {
    int* counter = (int*)malloc(sizeof(int));
    //If memory allocation is not successful.
    if (counter == NULL) {
        printf("Failed to allocate memory. Exiting...\n");
        return 1;
    }

    // Setting initial value to 0.
    *counter = 0;

    // Access and modify the counter
    (*counter)++;
    printf("Counter value: %d\n", *counter);

    // Free the allocated memory
    free(counter);

    return 0;
}
