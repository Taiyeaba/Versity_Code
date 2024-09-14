//write a c program to find the maximum number using the switch case.
#include<stdio.h>
int main()
{
    int n1,n2;
    printf("Enter two number : ");
    scanf("%d %d",&n1,&n2);
    switch(n1>n2){
case 0:
    printf("The maximum number is %d",n2);
    break;
case 1:
    printf("The maximum number is %d",n1);
    break;
}
return 0;
}

