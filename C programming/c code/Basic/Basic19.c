//write a c program to input the number of days from the user and convert it into years,months and days.
#include<stdio.h>
int main(){

     int days,years,months,remainingDays;
     printf("Enter the number of days: ");
     scanf("%d",&days);

     years = days/365;
     remainingDays =  days % 365;
     months = remainingDays/30;
     remainingDays = remainingDays %30;

     printf("Years: %d\n", years);
     printf("months: %d\n",months);
     printf("Days: %d\n",remainingDays);

        return 0;



}
