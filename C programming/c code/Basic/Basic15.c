//write a c program to input any capital letter and transform in to a small letter.
#include<stdio.h>
int main(){

    char capitalLetter,smallLetter;
    printf("Enter a capital letter");
    scanf("%c",&capitalLetter);

     if(isupper(capitalLetter)){
      smallLetter=tolower(capitalLetter);
      printf("the small letter is:%c \n",smallLetter);


     } else{
        printf("In valid input!please enter a capital letter\n");

     }


return 0;

}
