
//write a c program to find the largest number using conditional operator
#include <stdio.h>

int main()
{
// Declare three variables to store the numbers
int a, b, c;


printf("Enter three numbers: ");
scanf("%d %d %d", &a, &b, &c);

// Use conditional operators to find the largest number
int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);


printf("The largest number is %d\n", largest);

return 0;
}
