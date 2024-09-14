//string 7
#include<stdio.h>
#include<stdio.h>
int main(){

         char str[30];
         char find,replace;
          int i;

         printf("Enter a string: ");
         scanf("%s",str);

         printf("Enter the character to find:: ");
         scanf("%c",&find);

         printf("Enter the character to replace it with: ");
         scanf("%c",&replace);

         int length = strlen(str);
         for(i=0;i<length;i++){
            if(str[i]==find){
              str[i]==replace;
            }
         }
         printf("modified string:%s\n",str);

         return 0;

}
