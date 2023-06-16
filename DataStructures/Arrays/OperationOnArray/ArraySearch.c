#include <stdio.h>

int main() {
   int numbers[] = {10, 20, 30, 40, 50};
   int searchElement = 30;
   int length = sizeof(numbers) / sizeof(numbers[0]);
   int index = -1;
   
   // Search for the element in the array
   for (int i = 0; i < length; i++) {
      if (numbers[i] == searchElement) {
         index = i;
         break;
      }
   }
   
   if (index != -1) {
      printf("Element %d found at index %d\n", searchElement, index);
   } else {
      printf("Element %d not found in the array\n", searchElement);
   }

   return 0;
}
