//write a c program to print even or odd numbers in given range using recursion.
#include<stdio.h>
int Even_Odd_recursion (int i,int n){
if (i>n ){
 return 0;
}
  if(i%2==0){
printf("even\n");
  } else {
      printf("odd\n");
  }
 return Even_Odd_recursion (++i,n);
}
int main(){
int n=20;
int i=1;
Even_Odd_recursion (i,n);
return 0;
}
