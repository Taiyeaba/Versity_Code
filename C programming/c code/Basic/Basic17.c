//write a c program to input any capital letter and transform it to a small letter.(without using tolowera () function
#include<stdio.h>
int main(){

    char ch;
    printf("Enter any capital letter: ");
    scanf("%c",&ch);
    printf("capital letter %c = %c small letter \n ",ch,ch+32);

       return 0;

}
