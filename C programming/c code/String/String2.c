//2 write a c program  that checks the length of a given string.
#include<stdio.h>
#include<stdio.h>
int main(){
  char str[100];

  printf("Enter a string: ");
  scanf("%s",str);

  int d = strlen(str);
  printf("Length:%d\n",d);

  getch();
}
