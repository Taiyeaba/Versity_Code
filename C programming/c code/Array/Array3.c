//write a c program to find the largest and smallest elements in an array of integers.
#include<stdio.h>
int main(){
 int a[5]={23,56,678,98,5},large,small;

 large=small=a[0];
 for(int i=0;i<5;i++){

     if(large<a[i]){
        large=a[i];
     }
      if(small>a[i]){
        small=a[i];
      }
 }
printf("the largest number is:%d\n",large);
printf("the smallest number is:%d\n",small);
return 0;
}



