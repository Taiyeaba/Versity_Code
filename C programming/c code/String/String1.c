//1 write a c program that checks whether two strings r equal or not.
#include<stdio.h>
#include<stdio.h>
int main(){
 char str1[100];
 char str2[100];

 printf("enter a str1: ");
scanf("%s",str1);

  printf("enter a str2: ");
 scanf("%s",str2);



 int d=strcmp(str1,str2);
 if(d==0){
    printf("string are equal");
 }
 else
    printf("string is not equal");
    getch();
 }

