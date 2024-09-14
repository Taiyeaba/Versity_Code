//(4) string in concatenations.
#include<stdio.h>
#include<stdio.h>
int main(){
  char str1[100];
  char str2[100];

 printf("Enter string 1: ");
 scanf("%s",str1);
 printf("Enter string 2: ");
 scanf("%s",str2);

 strcat(str1,str2);
 printf("Concatenation:%s\n",str1);
  return 0;

}
