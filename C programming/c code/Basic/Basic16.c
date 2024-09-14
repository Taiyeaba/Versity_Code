//write a c program to input any small letter and transform it to capital letters.
#include<stdio.h>
int main(){

char smallLetter,capitalLetter;
    printf("Enter a small letter");
    scanf("%c",&smallLetter);

capitalLetter = toupper(smallLetter);
printf("the uppercase letter is :%c\n",capitalLetter);

    return 0;

    }
