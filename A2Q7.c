//Learn use of ternary operator
#include<stdio.h>

int main(){
    int a = 5 , b = 8;
    /*think of the ternary operator as
    (condition)?(Execute this if true):(execute this if false)
    */
    (a>b)?printf("%d is greater\n" , a):printf("%d is greater\n" ,b);
    int y=(a>b)?a:b;//here y gets assigned the value which is executed
    printf("%d\n" , y);
    return 0;
}