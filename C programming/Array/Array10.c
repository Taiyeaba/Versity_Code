// 10 write a c program to print 2D array.
#include<stdio.h>
int main(){
int i,j;
int A[3][4];
    printf("enter the value:\n ");
   for(i=0;i<3;i++){
   for(j=0;j<4;j++){

       printf("A[%d][%d]: ",i,j);
       scanf("%d",&A[i][j]);
   }
     printf("\n");
   }

 printf("A:\n ");
   for(i=0;i<3;i++){
    printf("\t");
   for(j=0;j<4;j++){
printf("%d",A[i][j]);
   }
   printf("\n");
   }

}
