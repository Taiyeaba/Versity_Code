//to check alphabets using conditional operators.
#include <stdio.h>

int main()
{
// Declare a variable to store the character
char ch;


printf("Enter a character: ");
scanf("%c", &ch);

// Use conditional operators to check if the character is an alphabet
// An alphabet is either in the range of 'A' to 'Z' or 'a' to 'z'
int isAlpha = ((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z'));

// Print the result
printf("The character %c is %s\n", ch, isAlpha ? "an alphabet" : "not an alphabet");

return 0;
}
