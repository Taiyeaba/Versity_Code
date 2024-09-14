//to determine and candidate's  age is eligible for casting the vote or not
#include <stdio.h>
int main()
{
    // Declare an integer variable to store the candidate's age
    int age;

    // Declare a constant variable to store the minimum age for voting
     int MIN_AGE = 18;


    printf("Enter your age: ");
    scanf("%d", &age);

    // Check if the age is greater than or equal to the minimum age using condition
    if (age >= MIN_AGE)
    {
        printf("You are eligible to vote.\n");
    }
    else
    {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}
