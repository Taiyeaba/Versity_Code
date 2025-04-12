#include <iostream>
using namespace std;

void Insertion_sort(int arr[], int n) {
    int temp, j, i;
    for (i = 1; i < n; i++) {
        temp = arr[i];
        j = i - 1;
        while ((temp < arr[j]) && (j >= 0)) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
    }
}

int main() {
    int arr[100], n;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Insertion_sort(arr, n);

    cout << "The sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
