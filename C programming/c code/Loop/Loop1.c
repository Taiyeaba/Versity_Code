//write a c program to print even numbers between a range of numbers,for example,from 1-10,using a for,while & do while loop.
#include<stdio.h>
        int main(){
        int n;

    printf("Enter a range: ");
    scanf("%d",&n);
    printf("Even numbers are: ");
    for(int i =0; i<=n; i++){

            if(i%2==0){
        printf("%d",i);
            }
    }
        return 0;

        }
