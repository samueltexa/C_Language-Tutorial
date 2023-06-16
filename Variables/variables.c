#include <stdio.h>
int main(){
    /*Declaration of variables*/
    int a;
    float b;
    // other ways of declaring variables, int a, b, c; or float a, b, c; or int a = 10, b = 30, c = 21;
    /*Assignment of values to the variables*/
    a = 4;
    b = 2.0;
    /*Declaration and assignment at the same time (Variable initialization)*/
    int sum = a + b;
    int product = a * b;
    float quotient = a / b;
    /*Display output*/
    printf("The value of a is: %d\n",a);
    printf("The value of b is: %.1f\n",b);
    printf("The sum of a and b is: %d\n",sum);
    printf("The product of a and b is: %d\n",product);
    printf("The quotient of a and b is: %.1f\n",quotient);


//ALTERNATIVE METHOD
    int w, x, y,z;
    float O = 3.3;
    w = x = y = z = 20;
    printf("\nw = %d\nx = %d\ny = %d\nz = %d\nO = %.1f\n",w,x,y,z,O);

    return 0;
}