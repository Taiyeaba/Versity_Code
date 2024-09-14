//write a c program that uses a pointer to find the largest element in an array of integers.
#include<stdio.h>
int main()
{
    int ar[5] = {3, 5, 1, 7, 9};
    int *ptr,large;
    large = ar[0];
    ptr = &ar;
    for (int i = 0; i<5; i++)
    {
        if(*(ptr + i)> large)
        {
            large = *(ptr + i);
        }
    }

     printf("The largest element in the array is %d\n",large);
}
