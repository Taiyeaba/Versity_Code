//write a c program to find out the quotient and reminder of two numbers.(without using modulus(%) operator)
#include<stdio.h>
int main(){
       int dividend, divisor, quotient,remainder;

       printf("Enter the dividend: ");
       scanf("%d",&dividend);

       printf("Enter the divisor: ");
       scanf("%d",&divisor);

       quotient = dividend/divisor;

       remainder = dividend - (quotient * divisor);

       printf("Quotient: %d\n",quotient);
       printf("Remainder: %d\n",remainder);

         return 0;




}
