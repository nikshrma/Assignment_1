#include<stdio.h>
#include<math.h>

int main(){
    //declaration
    float  prin,rate,n,temp,inter=0,amount;
    //input
    printf("Enter the principle amount.\n");
    scanf("%f", &prin);
    printf("Enter the time period.\n");
    scanf("%f", &n);
    printf("Enter the rate of interest.\n");
    scanf("%f", &rate);
    //processing using the formula
    amount = prin*(pow(1+(rate/100), n));
    printf("The final amount is %.2f\n" , amount);// here .2 rounds off the result to 2 decimal places
    
    //processing using while loop
    while(n>0){
        //process
        temp= (prin*rate)/100;
        //updating variables
        prin+= temp;
        inter+= temp;
        n--;
    }
    printf("The total compound interest using while loop is %.2f\n" , inter);
    printf("The final amount using while loop is %.2f\n" , prin);
    return 0;
}