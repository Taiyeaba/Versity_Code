//write a c program to perform input and output operations off all basic data types
#include<stdio.h>
int main(){

    int n;
    char ch;
    float f;
    double d;

    printf("Enter a integer number: ");
    scanf("%d",&n);
    printf("Integer number:%d\n\n",n);

    getchar();
    printf("Enter a char: ");
    scanf("%c",&ch);
    printf("character:%c\n\n",ch);



    printf("Enter a floating number: ");
    scanf("%f",&f);
    printf("floating number:%d\n\n",n);


    printf("Enter a double floating number: ");
    scanf("%lf",&d);
    printf("Double floating number:%d\n\n",n);


        return 0;

}
