//pointer 3
#include<stdio.h>
int main()
{
    int count = 0;
    char ar[100],character,*str;

    printf("Enter a string : ");
    gets(ar);

    printf("Enter the character : ");
    scanf("%c",&character);
    str = &ar;
    for( *str; *str!='\0'; *str++ )
    {
        if(*str == character)
        {
            count++;
        }
    }

     printf( "The character '%c' appears %d times in the string",character,count);
     return 0;
}


