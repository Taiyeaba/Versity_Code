//Write a c program to find the frequency of a given element in an array of integers.
#include<stdio.h>
int main(){

     int size,i,key;

printf("Enter the size of the array: ");
scanf("%d",&size);

int array[size];

printf("Enter %d integers:\n",size);
for(i=0;i<size;i++){
    scanf("%d",&array[i]);
}

printf("Enter the element to find the frequency: ");
scanf("%d",&key);

int frequency = 0;
for(i=0;i<size;i++){
  if(array[i]==key){
    frequency++;
  }
}
   printf("The frequency of %d is:%d\n",key,frequency);

   return 0;
}







