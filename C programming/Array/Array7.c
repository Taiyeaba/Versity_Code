//to reverse an array of integers
#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};

    printf("Reverse array: ");

    for (int i = 4; i >=0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}



