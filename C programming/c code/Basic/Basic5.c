//check the differences between pre past increment decrement operators.
#include<stdio.h>

  int main(){
   int a,b;
    a=5;
    b=10;

 printf("post increment of a: %d\n",a++);
 printf("pre increment of a: %d\n",++a);
 printf("post decrement of a: %d\n",b--);
 printf("pre decrement of a: %d\n",--b);

    return 0;
  }
