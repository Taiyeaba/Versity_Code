// 13 2D array transpose
#include<stdio.h>
int main(){
int A[10][10],transpose[10][10],i,j,row,col;

printf("enter number of rows and columns: ");
scanf("%d %d",&row,&col);

//taking input for the matrix
printf("\nenter the value:\n");
for(i=0;i<row;i++){
for(j=0;j<col;j++){
    printf("A[%d][%d]: ",i,j);
    scanf("%d",&A[i][j]);
  }
}
 //transpose
 for(i=0;i<row;i++){
for(j=0;j<col;j++){
 transpose[j][i]=A[i][j];
}
 }

//printing the matrix
printf("\nEntered matrix:\n");
for(i=0;i<row;i++){
for(j=0;j<col;j++){
  printf("%d",A[i][j]);
}
  printf("\n");
}



//printing transpose matrix
printf("\nTranspose matrix:\n");
for(i=0;i<col;i++){
for(j=0;j<row;j++){
  printf("%d",transpose[i][j]);
}
  printf("\n");
}
}


