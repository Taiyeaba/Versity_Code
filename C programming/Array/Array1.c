
//a c program that initializes an array of integers with 5 elements and then prints each elements of the array.
#include <stdio.h>
int main()
{

    int array[5] = {1, 2, 3, 4, 5};
    printf("Elements of the array: ");

    for(int i=0; i<5; i++)
    {
        printf("%d ",array[i]);
    }
    printf("\n");

    return 0;
}
