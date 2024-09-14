//5 Palindrome in string.
#include<stdio.h>
#include<stdio.h>
int main(){
 char str1[100];
 char str2[100];

 printf("enter a string1: ");
 scanf("%s",str1);

 int i=0,len=0,j;
 while(str1[i]!='\0'){
    i++;
    len++;
 }
 for(j=0,i=len-1;i>=0;i--,j++){
 str2[j]=str1[i];
}
 str2[j]='\0';
 printf("str1:%s\n",str1);
 printf("str2:%s\n",str2);

 int d=strcmp(str1,str2);
 if(d==0)
    printf("string is palindrome");
 else
    printf("string is not palindrome");
    return 0;
 }


