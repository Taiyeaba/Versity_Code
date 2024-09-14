//write c program that will take a sentence as an input and will print that.
#include<stdio.h>
 int main(){
  char ch;

 printf("Enter a sentence: ");
 scanf("%[^\n]s", &ch);
 printf("the sentence is:%s ");

   return 0;

}
