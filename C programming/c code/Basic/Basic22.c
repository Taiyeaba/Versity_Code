//write a c program to input two digits numbers from the user and display with reverse number on screen numbers.(Hint:I/P:32 O/P:23
#include<stdio.h>
int main(){
      int number, originalNumber, reverseNumber;

      printf("Enter a two digit number: ");
      scanf("%d",&number);

      originalNumber = number;

      reverseNumber=(number % 10) * 10+(number/10);

      printf("Original Number : %d\n ",originalNumber);
      printf("Reverse Number : %d\n", reverseNumber);

        return 0;

}

