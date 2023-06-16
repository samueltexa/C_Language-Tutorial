#include <stdio.h>

int main() {
   int numbers[] = {10, 20, 30, 40, 50};
   int length = sizeof(numbers) / sizeof(numbers[0]);
   
   printf("Length of the array is : %d\n", length);

   return 0;
}
