
#include<stdio.h>
#include<string.h>

int main()
{
    char ar[100],*str;

    printf("Enter a string : ");
    gets(ar);
    str = &ar;
    printf("Reversed string : ");
    for( int i = strlen(ar)-1; i>=0; i-- )
    {
     printf("%c",*(str+i));
    }

     return 0;
}


