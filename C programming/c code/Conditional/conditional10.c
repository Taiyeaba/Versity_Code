//to accept two integers and check whether they are equal or not
#include <stdio.h>
int main()
{
    // Declare two integer variables
    int x, y;

    // Read two integers from the user
    printf("Enter two integers: ");
    scanf("%d %d", &x, &y);

    // Check if the two integers are equal or not using condition
    // Two integers are equal if they have the same value
    if (x == y)
    {
        printf("%d and %d are equal.\n", x, y);
    }
    else
    {
        printf("%d and %d are not equal.\n", x, y);
    }

    return 0;
}
