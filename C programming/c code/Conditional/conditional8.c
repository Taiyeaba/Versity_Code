
//to check entered character vowels or consonants.
#include <stdio.h>
int main()
{
    // Declare a character variable
    char ch;


    printf("Enter a character: ");
    scanf("%c", &ch);


    if ((ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U') ||
        (ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u'))
    {
        printf("%c is a vowel.\n", ch);
    }
    else
    {
        printf("%c is a consonant.\n", ch);
    }

    return 0;
}