//wac program to remove an array of integers by a given number of position.
#include<stdio.h>
int main(){

int size,i,j,k;
printf("Enter the size of array: ");
scanf("%d",&size);

int array[size];
printf("Enter %d integers:\n",size);

for(i=0;i<size;i++){
scanf("%d",&array[i]);
}
for(i=0;i<size;i++){
 for(j=i+1;j<size;){
  if(array[i]==array[j]){

for(k=j;k<size-1;k++){
  array[k]=array[k+1];
}
  size--;
  }else {
   j++;
  }
 }
}
  printf("Array without duplicates:\n");
  for(i=0;i<size;i++){
 printf("%d",array[i]);
  }
   printf("\n");
   return 0;
}












