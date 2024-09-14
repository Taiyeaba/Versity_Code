//write c program to find cube of a number using function.

#include<stdio.h>
 double cube (double num){
 return num*num*num ;
 }
int main(){

        double num;
        printf("enter the value: ");
        scanf("%lf",&num);

double result= cube (num);
printf("the cube of this num is %lf",num,result);
return 0;




}
