//write a c program to find the largest among three variables using nested if
#include <stdio.h>
int main()
{
    // Declare three variables
    int a, b, c;

    // Read values from the user
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Find the largest among them using nested if
    if (a > b)
    {
        if (a > c)
        {
            printf("%d is the largest number.\n", a);
        }
        else
        {
            printf("%d is the largest number.\n", c);
        }
    }
    else
    {
        if (b > c)
        {
            printf("%d is the largest number.\n", b);
        }
        else
        {
            printf("%d is the largest number.\n", c);
        }
    }

    return 0;
}
