// Certainly! Pointers in C are variables that store memory addresses. They are widely used to manipulate
// and access data dynamically, particularly when dealing with arrays, structures, and functions. Here are
// some details about pointers, along with code snippets to illustrate their usage:

// Syntax
// A pointer is a variable pointing to the address of another variable.
// It is declared along with an asterisk symbol (*). The syntax to declare a pointer is as follows:
//          datatype *var1
// The syntax to assign the address of a variable to a pointer is:
//          datatype var1, *var2;
// var2=&var1;



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
    printf("Value at ptr+3: %d\n", *(pointer+3)); // Output: 40


// Example2
    int value1 = 10;             // Regular variable
    int *pointer1;              // Pointer variable 1
    int value2, *pointer2;      // Declaration of value2 and pointer2

    pointer1 = &value1;         // Assigning the address of value1 to pointer1
    value2 = 20;                // Assigning a value to value2
    pointer2 = &value2;         // Assigning the address of value2 to pointer2

    printf("Value1: %d\n", value1);
    printf("Pointer1 value: %p\n", pointer1);
    printf("Dereferenced Pointer1 value: %d\n", *pointer1);

    printf("Value2: %d\n", value2);
    printf("Pointer2 value: %p\n", pointer2);
    printf("Dereferenced Pointer2 value: %d\n", *pointer2);


return 0;
}

