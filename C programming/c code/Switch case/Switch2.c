//To create calculator using switch statement.
#include<stdio.h>
int main()
{
    double n1,n2;
    char operators;
    printf("Enter any operator : (+, -, *, /) : ");
    scanf("%c",&operators);
    printf("Enter two number : ");
    scanf("%lf %lf",&n1,&n2);
    switch(operators)
    {
    case '+':
        printf("The addition of two numbers are %lf",n1+n2);
        break;
    case '-':
        printf("The subtraction of two numbers are %lf",n1-n2);
        break;
    case '*':
        printf("The multiplication of two numbers are %lf",n1*n2);
        break;
    case '/':
        printf("The division of two numbers are %lf",n1/n2);
        break;

    default:
        printf("Error! operator is not correct\n");
    }
    return 0;
}


