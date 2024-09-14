//to check whether a character is an alphabet,digit or special character
#include <stdio.h>
int main()
{
    // Declare a character variable
    char ch;

    // Read a character from the user
    printf("Enter a character: ");
    scanf("%c", &ch);


    if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
    {
        printf("%c is an alphabet.\n", ch);
    }
    else if (ch >= 48 && ch <= 57)
    {
        printf("%c is a digit.\n", ch);
    }
    else
    {
        printf("%c is a special character.\n", ch);
    }

    return 0;
}
