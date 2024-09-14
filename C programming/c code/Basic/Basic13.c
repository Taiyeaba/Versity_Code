//write a c program to convert celsius value into Fahrenheit value.(Formula F=9c/5+32);
#include<stdio.h>
int main(){
float celsius,fahrenheit;

printf("Enter temperature in celsius: ");
scanf("%f",&celsius);

fahrenheit=(celsius*9/5)+32;
printf("%.3f celsius = %.3f fahrenhight",celsius,fahrenheit);

   return 0;

}
