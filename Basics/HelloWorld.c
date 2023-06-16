#include <stdio.h>
int main() {
   // printf() displays the string inside quotation
   // new line character(\n): creates a new line before and after.
   printf("\nHello, welcome to the world!. ");
   printf("Do you mind taking a walk through\n");
   printf("\nHow have you been doing over the last days.\n");
   return 0;
}

// Now let's go through it line by line:

//#include: all lines that start with pound (#) sign are called directives.
//The #include directive tells the compiler to include a file.

// #include <stdio.h>: This line includes the header file stdio.h, which stands for (standard input/output).
// It provides functions(operations) like printf and scanf for input and output operations.

// int main() {}: This line marks the beginning of the main function, which is the entry point of a C program.
// Execution starts from here.

// printf("Hello, World!\n");: This line uses the printf function to display the string "Hello, World!"
// on the console. The \n represents a newline character, which adds a line break after the output.

// return 0;: This line indicates the end of the main function and returns the value 0 to the operating system.
// In C, returning 0 from main typically signifies successful program execution.