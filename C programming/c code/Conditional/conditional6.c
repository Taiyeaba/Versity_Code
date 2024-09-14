
//to check if a number is positive,negative or zero.
#include <stdio.h>

int main()
{
// Declare a variable to store the number
int num;


printf("Enter a number: ");
scanf("%d", &num);

// Use if condition to check the sign of the number
if (num > 0)
{
// The number is positive
printf("The number %d is positive\n", num);
}
else if (num < 0)
{
// The number is negative
printf("The number %d is negative\n", num);
}
else
{
// The number is zero
printf("The number %d is zero\n", num);
}

return 0;
}
