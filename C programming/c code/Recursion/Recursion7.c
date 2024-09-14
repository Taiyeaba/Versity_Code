//write a c program to generate fibonacci term using recursion.
#include<stdio.h>
int fibo(int n)
{
    if(n==0|| n==1)
    {
        return n;
    }
    int f1 = fibo(n-1);
    int f2 = fibo(n-2);
    
        return f1+f2;
    }

int main()
{
    int n;
    printf("Enter the value: ");
    scanf("%d",&n);
    int result = fibo(n);
    printf("fibonacci:%d",result);

    return 0;
}






