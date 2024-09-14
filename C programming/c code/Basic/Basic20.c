//write a c program yo input 3 digits number from the user and calculate sum of the first and last numbers.(Hint:I/P:0/P:11)
#include<stdio.h>

int main(){
       int number,firstDigit, lastDigit, sum;

        printf("Enter a three-digit number: ");
        scanf("%d", &number);

        firstDigit = number/100;
        lastDigit = number%10;

        sum = firstDigit + lastDigit;

        printf("Sun of first and last digits: %d\n", sum);

     return 0;
}
