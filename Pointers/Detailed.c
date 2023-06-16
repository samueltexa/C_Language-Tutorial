// Certainly! Pointers in C are variables that store memory addresses. They are widely used to manipulate
// and access data dynamically, particularly when dealing with arrays, structures, and functions. Here are
// some details about pointers, along with code snippets to illustrate their usage:

// 1. Pointer Declaration and Initialization:
//Pointers are declared using the * symbol. Here's an example of declaring and initializing a pointer:

#include <stdio.h>
int main()
{
    // 1. Declaration of an integer pointer
    //int *ptr;       
    int num = 10;
    //ptr = &num;     // Initialization with the address of 'num'

// 2. Accessing the Value at a Memory Address:
//Pointers can be used to access the value stored at a particular memory address using
//the dereference operator *. Here's an example:

    int *ptr = &num;
    printf("Value at ptr: %d\n", *ptr);  // Output: 10

// 3. Pointer Arithmetic:
//Pointers can be incremented or decremented, allowing navigation through memory.
//This is useful when working with arrays or allocating memory dynamically. Here's an example:
    int arr[] = {10, 20, 30, 40, 50};
    int *pointer = arr;  // Pointer initialized with the base address of 'arr'
    printf("Value at ptr: %d\n", *pointer);       // Output: 10
    printf("Value at ptr+2: %d\n", *(pointer+3)); // Output: 40

    return 0;
}

