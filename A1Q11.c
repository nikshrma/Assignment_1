#include<stdio.h>

int main(){
    //declaration
    float base, gross;
    //Input
    printf("Enter your base salary.\n");
    scanf("%f" , &base);
    //calculating ouput
    gross = base + 0.10*base + 0.12*base; //as da(daily allowance)=10% of base and ta=12% of base
    //Display output
    printf("Your gross salary is %f\n" , gross);
    return 0;
}