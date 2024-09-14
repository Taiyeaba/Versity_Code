
// A c program to print sum of digits enter by user
#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("enter a range : ");
    scanf("%d" ,&n);

    for(int i = 0; i<=n; i++)
    {
        sum+=1;

    }
    printf(" %d ",sum);
    return 0;
}
