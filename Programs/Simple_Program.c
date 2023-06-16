//write a program that takes in two numbers and returns theire sum.
#include <stdio.h>
int main()
{
    float x, y, z;
    printf("\nEnter the value of x: ");
    scanf("%f", &x);
    printf("Enter the value of y: ");
    scanf("%f", &y);
    z = x + y;
    printf("The sum of x and y is: %.1f",z);


    float v;
    
    printf("\nEnter a float value: ");
    scanf("%f", &v);

    printf("\nYou entered: %.2f\n", v);
}