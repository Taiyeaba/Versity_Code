//5

#include<stdio.h>
int main()
{
    int n1,n2;
    char operators;
    printf("Choose a number (1 to 5) : \n");
    printf("1 : Add\n");
    printf("2 : Subtrac\n");
    printf("3 : Multiply\n");
    printf("4 : Divide\n");
    printf("5 : Reminder\n");

    scanf("%d",&operators);
    printf("Enter two number : ");
    scanf("%d %d",&n1,&n2);
    switch(operators)
    {
    case 1:
        printf("The addition of two numbers is : %d",n1+n2);
        break;
    case 2:
        printf("The subtraction of two numbers is : %d",n1-n2);
        break;
    case 3:
        printf("The multiplication of two numbers is : %d",n1*n2);
        break;
    case 4:
        if(n1!=0)
        printf("The division of two numbers is : %.2f",(float)n1/n2);
        break;
    case 5:
        printf("The reminder of two numbers is : %d",n1%n2);
        break;


    default:
        printf("Error! operator is not correct\n");
    }
    return 0;
}


