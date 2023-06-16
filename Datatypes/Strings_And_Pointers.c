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
#include <string.h>  // Include the <string.h> header for strlen()
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

//Strings
    //string length
    char str[] = "Hello, World!";
    int length = strlen(str);
    printf("\nLength of the string is: %d\n", length);

    //string copy
    char source[] = "Hello, World!";
    char destination[20];
    strcpy(destination, source);
    printf("Copied string: %s\n", destination);

    //string concatination(joining)
    char str1[20] = "Hello";
    char str2[] = ", World!";
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    //string comparision
    char str3[] = "apple";
    char str4[] = "banana";
    int result = strcmp(str1, str2);
    if (result < 0) {
        printf("%s is less than %s\n", str3, str4);
    } else if (result > 0) {
        printf("%s is greater than %s\n", str3, str4);
    } else {
        printf("%s is equal to %s\n", str3, str4);
    }

    return 0;