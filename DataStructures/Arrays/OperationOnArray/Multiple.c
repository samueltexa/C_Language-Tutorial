#include <stdio.h>

int main() {
   // Adding elements to an array
   int numbers[] = {10, 20, 30, 40, 50};
   int length = sizeof(numbers) / sizeof(numbers[0]);
   int newElement = 60;
   int updatedLength = length + 1;
   int updatedNumbers[6];

   for (int i = 0; i < length; i++) {
      updatedNumbers[i] = numbers[i];
   }

   updatedNumbers[length] = newElement;

   printf("Array after adding element: ");
   for (int i = 0; i < updatedLength; i++) {
      printf("%d ", updatedNumbers[i]);
   }
   printf("\n");

   // Deleting an element from an array
   int deleteIndex = 2;
   int reducedLength = updatedLength - 1;

   for (int i = deleteIndex; i < updatedLength - 1; i++) {
      updatedNumbers[i] = updatedNumbers[i + 1];
   }

   printf("Array after deleting element: ");
   for (int i = 0; i < reducedLength; i++) {
      printf("%d ", updatedNumbers[i]);
   }
   printf("\n");

   // Joining two arrays
   int array1[] = {1, 2, 3};
   int array2[] = {4, 5, 6};
   int length1 = sizeof(array1) / sizeof(array1[0]);
   int length2 = sizeof(array2) / sizeof(array2[0]);
   int joinedLength = length1 + length2;
   int joinedArray[joinedLength];

   for (int i = 0; i < length1; i++) {
      joinedArray[i] = array1[i];
   }

   for (int i = 0; i < length2; i++) {
      joinedArray[length1 + i] = array2[i];
   }

   printf("Joined array: ");
   for (int i = 0; i < joinedLength; i++) {
      printf("%d ", joinedArray[i]);
   }
   printf("\n");

   return 0;
}
