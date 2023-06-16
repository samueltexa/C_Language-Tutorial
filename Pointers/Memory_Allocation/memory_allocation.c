#include <stdio.h>
#include <stdlib.h>
#include <stddef.h> 

void increment(int *numPtr) {
   (*numPtr)++;  // Increment the value at the memory location
}

int main() {
   int *ptr = malloc(sizeof(int));
   if (ptr == NULL) {
       printf("Memory allocation failed.\n");
       return 1;
   }
   *ptr = 10;
   increment(ptr);  // Pass the pointer to the function
   printf("Value: %d\n", *ptr);  // Output: 11
   free(ptr);  // Deallocate the memory
   return 0;

   
}
