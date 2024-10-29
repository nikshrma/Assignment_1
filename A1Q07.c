// Objective is to find the Nth root
#include <stdio.h>
#include <math.h> //this header file consists of various math functions including the pow function we require for solving this question.

int main()
{
    // declaration
    double num, power, res;
    // Input base and its power.
    printf("Enter the base.\n");
    scanf("%lf", &num);
    printf("Enter the root you want to find.\n");
    scanf("%lf", &power);
    // using pow
    res = pow(num, 1 / power);
    /*pow is a double pow(Double , double) function which means both its arguements
    should be double and its result will be double too.*/
    printf("The output is %lf\n", res);
    return 0;
}
