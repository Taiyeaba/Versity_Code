//to find the second largest element in an array of integers.
#include <stdio.h>

int main() {
    int arr[5] = {34, 3, 23, 20, 50},large=0,second_large=0;


    for (int i = 0; i < 5; i++) {
        if(large < arr[i]){
                second_large = large;
            large = arr[i];
        }
       else if(arr[i] < large && second_large < arr[i])
        {
           second_large = arr[i];
        }
    }
    printf("The largest element of the array is : %d\n",large);
      printf("The second largest element of the array is : %d\n",second_large);

    return 0;
}




