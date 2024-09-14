
// A c program to print all natural numbers in reverse order
#include<stdio.h>
int main(){
    int n;
    printf("enter a range : ");
    scanf("%d",&n);
    for(int i = n; i>=0;i--)
    {
        printf(" %d ",i);
    }
    return 0;
}
