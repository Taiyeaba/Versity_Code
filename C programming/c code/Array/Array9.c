//wac program to rotate an array of integers by a given number of positions.
#include<stdio.h>
int main(){
int size,rotateBy,i,j;

printf("Enter the size of the array: ");
scanf("%d",&size);

int array[size];

printf("Enter %d integers:\n",size);
for(i=0;i<size;i++){
 scanf("%d",&array[i]);
}
printf("Enter the number of positions to rotate by: ");
scanf("%d",&rotateBy);

for(i=0;i<rotateBy;i++){
int lastElement=array[size-i];

 for(j=size-1;j>0;j--){
    array[j]=array[j-1];
}
array[0]=lastElement;
}
printf("Rotated array: ");
for(i=0;i<size;i++){
printf("%d",array[i]);
}
  printf("\n");
  return 0;
}






