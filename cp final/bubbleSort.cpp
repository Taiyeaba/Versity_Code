// Bubble Sort with user input
#include<iostream>
using namespace std;

int* BSS(int arr[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = 0; j < n - 1 - i; j++)  // optimization: reduce comparisons after each pass
        {
            if(arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[100]; // maximum array size is 100
    cout << "Enter " << n << " elements:\n";
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int* result = BSS(arr, n);

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++)
    {
        cout << result[i] << " ";
    }

    return 0;
}
