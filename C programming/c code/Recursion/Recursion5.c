//write c program to find sum of natural numbers in given range using recursion.
#include<stdio.h>
int main (){
 int n;
 printf("enter the natural number: ");
 scanf("%d",&n);
 int result = sum(n);
 printf("the sum of given range:%d",result);
return 0;

}

int sum (int n){
if(n==1){
 return 1;
} else {
       return n + sum(n-1);
}
 }



