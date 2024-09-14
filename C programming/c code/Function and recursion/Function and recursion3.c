//write a c program to perform all Arithmetic operators using functions.
#include<stdio.h>
    int sum (int a,int b){
     int sum= a+b;
     return sum;
}

    int sub (int a,int b){
        int sub=a-b;
        return sub;

    }
     int mul (int a,int b){
        int mul=a*b;
        return mul;
     }
        float div (int a,int b){
           float div=a/b;
           return div;
        }
        int rem (int a,int b){
            int rem=a%b;
            return rem;
        }
        int main(){
          int x,y;
          printf("enter the value: ");
          scanf("%d %d",&x,&y);

                    int result1=sum(x,y);
                    int result2=sub(x,y);
                    int result3=mul(x,y);
                    int result4=div(x,y);
                    int result5=rem(x,y);
printf("sum=%d\n sub=%d\n mul=%d\n div=%d\n rem=%d\n",result1,result2,result3,result4,result5);

    return 0;

}
