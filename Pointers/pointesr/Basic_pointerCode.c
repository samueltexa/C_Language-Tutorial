#include <stdio.h>
int main(){
    char *x;
    x = "Hello, how are you over ther";
    printf("\nThe string is: %s",x);
    printf("\nThe character pointed to is: %c",*x);
    printf("\nThe number of the character is: %d",*x);
    printf("\nThe integer number of the string is:%d",x);
    printf("\nThe float number is: %f",x);
     printf("\nThe address hexadecimal is: %p",*x)// Outputs the memory address of *x (0x7ffe5367e044)
    printf("\nThe address hexadecimal is: %p",x);// Outputs the memory address of x (0x7ffe5367e044)
    return 0;
}