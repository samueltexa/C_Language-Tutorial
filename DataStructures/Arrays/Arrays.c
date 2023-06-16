// n C, an array is a collection of elements of the same data type stored in contiguous memory locations.
// Each element in the array can be accessed by its index, which represents its position in the array.
// The index starts from 0 and goes up to the size of the array minus one. syntax===>data_type nameOfArray[];

#include <stdio.h>

int main() {
   // Declare an array of integers with a size of 5
   int numbers[5];

   // Assign values to the array elements
   numbers[0] = 10;
   numbers[1] = 20;
   numbers[2] = 30;
   numbers[3] = 40;
   numbers[4] = 50;
//alternative of array declaration
//int numbers[] = {10, 20, 30, 40, 50};

   // Access and print array elements
   printf("The number at index 0 is: %d\n", numbers[0]);  // Output: 10
   printf("The number at index 2 is: %d\n", numbers[2]);  // Output: 30
   printf("The number at index 4 is: %d\n", numbers[4]);  // Output: 50

   // Iterating over the array elements using a loop
   for (int i = 0; i < 5; i++) {
      printf("\nThe numbers are: %d \n", numbers[i]);
   }

   return 0;
}
