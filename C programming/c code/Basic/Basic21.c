//write a c program to input three digits numbers from the user and display the square of first and last numbers.(Hint:I/P:358 O/P:Square of 3 is 9 and square of 8 is 64)
#include<stdio.h>

 int main(){
      int number, firstDigit, lastDigit;

     printf("Enter a three-digit number: ");
     scanf("%d", &number);

     firstDigit = number/100;
     lastDigit = number%10;

     printf("square of %d is %d\n",firstDigit, firstDigit *  firstDigit );
     printf("square of %d is %d\n",lastDigit, lastDigit * lastDigit);

         return 0;


}
