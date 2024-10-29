//Learning swapping
#include<stdio.h>

int main(){
    int a = 5 , b = 7 , temp ;
    // the goal is to give a the value of b and b the value of a
    // for that we must know that the value of the varible on the RHS of '=' gets assigned to the variable on LHS
    temp = a; // save vale of a in temp
    a = b; // save value of b in a
    b = temp; // save value of a in b through temp
     printf("\nNow after swapping a and b are %d and %d respectively.\n\n" , a , b );
    return 0;
}