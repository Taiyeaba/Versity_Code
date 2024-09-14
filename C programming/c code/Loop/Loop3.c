//to print ASCII values of all characters.
#include<stdio.h>
int main(){

       char ch;

       printf("Alphabets are: ");
       for(ch = 'A'; ch<='Z'; ch++){

            if(ch>='A' && ch<='Z'|| ch>='a' && ch<='z'){

           printf("%d",ch);

            }


       }

   return 0;

}

