#include <stdio.h>

int main() {
   int numbers[] = {10, 20, 30, 40, 50};
   int length = sizeof(numbers) / sizeof(numbers[0]);
   int sum = 0;
   
   // Calculate the sum of all elements
   for (int i = 0; i < length; i++) {
      sum += numbers[i];
   }
   
   printf("Sum of all elements: %d\n", sum);

   return 0;
}
