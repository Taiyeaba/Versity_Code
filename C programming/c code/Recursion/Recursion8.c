//write a c program to find factorial of a number using recursion.
#include<stdio.h>
int main()
{

    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    int result=fact(n);
    printf("factorial:%d\n",result);
    return 0;
}

int fact (int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n * fact(n-1);
    }
}


