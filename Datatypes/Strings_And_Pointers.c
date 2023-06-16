/*
       Text Strings and Pointers
Strings in C are handled differently than in any othe programming languages. When a string is stored in the
memory, you keep track of the first character by storing its address in a special type of variable called
pointer.Knowing the begging address and the length of the string, the program can locate it. This means that
the pointer is a vriable containing an address of another variable(rather than data).
Declaring pointers (*) is used.
Example
If "a" is a pointer to a charater, its declared as===> char *a;
To an int its declared as===> int *a;
*/

#include <stdio.h>
int main(){
    /*Example1*/
    char *a;
    a = "hello!, again.";
    printf("\n%s\n",a);

    /*Example2*/

    char *b, *c;
    b = "Hi,I am the string pointed to by the pointer a.";
    c = "Hello, I am the string pointed to by the pointer b.";
    printf("\n%s\n%s\n",b,c);

    /*Example3
    proper conversion identifiers (p)
    */

    char *x;
    x = "Hello again ";
    printf("\n%s",x);
    printf("\n%c",*x);
    printf("\n%d",x);
    printf("\n%p",x);
    return 0;
}