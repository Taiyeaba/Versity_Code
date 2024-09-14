//write a c program to input any ASCII number and display appropriate characters on screen.
#include<stdio.h>
int main(){
int n;

  printf("please enter ASCII number: ");
  scanf("%d",&n);
  printf("The appropriate character of ASCII %d = %c",n,n);

    return 0;

}
