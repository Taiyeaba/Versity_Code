//write a c program to find the sum of all the elements in an array of integers.
 #include<stdio.h>
 int main(){
   int array[5]={1,2,3,4,5},sum=0;

   for(int i=0;i<5;i++){
    sum=sum+array[i];
   }
     printf("sum of all the elements:%d ",sum);
     return 0;
 }
