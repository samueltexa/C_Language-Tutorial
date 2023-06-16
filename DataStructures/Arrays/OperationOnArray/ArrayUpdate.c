#include <stdio.h>

int main() {
   int numbers[] = {10, 20, 30, 40, 50};
   
   // Update the value of the third element
   numbers[2] = 35;

   // Print the updated array
   for (int i = 0; i < 5; i++) {
      printf("\nThe numbers are: %d \n", numbers[i]);
   }

   return 0;
}
