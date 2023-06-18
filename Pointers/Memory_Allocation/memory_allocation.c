#include <stdio.h>
#include <stdlib.h>
#include <stddef.h> 

void increment(int *numPtr) {
   (*numPtr)+=4;  // Increment the value at the memory location
}

int main() {
   int *ptr = malloc(sizeof(int));
   //  If the malloc function fails to allocate
   //  memory (returns a NULL pointer.), an error message is
   //  printed, and the program exits with a status of 1.
   if (ptr == NULL) {
       printf("Memory allocation failed.\n");
       return 1;
   }
   // The value 10 is stored at the memory location pointed
   // to by ptr using the dereference operator (*ptr = 10).
   *ptr = 10;
   increment(ptr);  // Pass the pointer to the function
   printf("Value: %d\n", *ptr);  // Output: 11

   // The memory allocated by malloc is freed using
   // the free function to prevent memory leaks.
   free(ptr);  // Deallocate the memory
   return 0;

   
}
