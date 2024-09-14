//write a c program to find out the largest between three numbers.
#include <stdio.h>
int main()
{
    // Declare three integer variables
    int a, b, c;

    // Read three numbers from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);


    if (a >= b && a >= c)
    {
        printf("%d is the largest number.\n", a);
    }
    else if (b >= a && b >= c)
    {
        printf("%d is the largest number.\n", b);
    }
    else
    {
        printf("%d is the largest number.\n", c);
    }

    return 0;
}
