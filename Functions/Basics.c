// A function is a block of code which only runs when it is called. You can pass data, known as parameters,
// into a function. Functions are used to perform certain actions, and they are importantfor reusing code:
// Define the code once, and use it many times. Examples: predefined functions: main(), printf(), sacnf().

#include <stdio.h>

// Function declaration
void sayHello(){
    printf("Hello.\n");
}

// Function definition
void sayGoodbye() {
    printf("Goodbye!\n");
}

// Function definition
void sayThis() {
    printf("This is my first function\n");
}

void another(){
    printf("Have has been passed through another function.\n\n");
}

void myFunction(){
    another();
    
    }
int main()//predefined function
{
    sayHello();
    sayGoodbye();
    sayThis();
    myFunction();

    return 0;
}