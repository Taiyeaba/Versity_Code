//write a c program to check uppercase or lowercase alphabets.
#include <stdio.h>
int main()
{
    // Declare a character variable
    char ch;

    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 65 && ch <= 90)
    {
        printf("%c is an uppercase letter.\n", ch);
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("%c is a lowercase letter.\n", ch);
    }
    else
    {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}
