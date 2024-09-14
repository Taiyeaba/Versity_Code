
#include <iostream>
#include <cmath>

// Jump search function
int jumpSearch(int arr[], int n, int x) {
    // Finding block size to jump
    int step = sqrt(n);

    // Finding the block where the element may be present
    int prev = 0;
    while (arr[std::min(step, n) - 1] < x) {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1; // Element not found
    }

    // Linear search in the block starting from prev
    while (arr[prev] < x) {
        prev++;
        if (prev == std::min(step, n))
            return -1; // Element not found
    }

    // If the element is found
    if (arr[prev] == x)
        return prev;

    return -1; // Element not found
}

// Main function
int main() {
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 7; // Element to be searched

    int index = jumpSearch(arr, n, x);

    if (index != -1)
        std::cout << "Element " << x << " found at index " << index << std::endl;
    else
        std::cout << "Element " << x << " not found in the array" << std::endl;

    return 0;
}
