
#include<iostream>
using namespace std;

// Function to perform interpolation search
int interpolationSearch(int array[], int n, int skey)
{
    int low = 0;
    int high = n - 1;

    while (low <= high && skey >= array[low] && skey <= array[high])
    {
        if (low == high)
        {
            if (array[low] == skey)
                return low; // Element found at index low
            else
                return -1; // Element not found
        }

        // Estimate the position of the key
        int pos = low + ((high - low) / (array[high] - array[low])) * (skey - array[low]);

        // If key is found
        if (array[pos] == skey)
            return pos; // Element found at index pos

        // If key is larger, search in the right sub-array
        else if (array[pos] < skey)
            low = pos + 1;

        // If key is smaller, search in the left sub-array
        else
            high = pos - 1;
    }

    return -1; // Element not found
}

int main()
{
    int array1[100] = {10, 13, 15, 26, 28, 30, 50, 56, 58}; // Sorted array
    int n = 9; // Number of elements in the array

    int skey;
    cout << "Enter the element to search: ";
    cin >> skey;

    int index = interpolationSearch(array1, n, skey); // Perform interpolation search

    if (index != -1)
        cout << "Element " << skey << " found at index: " << index << endl;
    else
        cout << "Element " << skey << " not found in the array." << endl;

    return 0;
}//Interpolation with function
