//To check even or odd using switch case.
#include<stdio.h>
int main()
{
  int num;

    printf("Enter a number : ");
    scanf("%d",&num);
    switch(num%2==0)
    {
    case 0:
        printf("The number is odd\n");
        break;
    case 1:
        printf("The number is even\n");
        break;

    default:
        printf("Error! operator is not correct\n");
    }
    return 0;
}


