//write a c program to check even or odd using function.
#include<stdio.h>

void Even_or_Odd (int x){
if(x%2==0){
  printf("Even\n");

}else{
    printf("Odd\n");
    }

}
 int main(){
  int x;
  printf("value of x: ");
  scanf("%d",&x);
 Even_or_Odd (x);
 return 0;


 }
