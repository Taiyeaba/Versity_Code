
#include<stdio.h>
#include<string.h>

int main()
{
    int count = 0;
    char ar[100],*str;

    printf("Enter a string : ");
    gets(ar);

    str = &ar;
    for( *str; *str!='\0'; *str++)
    {
     count++;
    }

     printf("The length of the string is %d\n",count);

     return 0;
}


