#include <iostream>

using namespace std;

// Function to find subarray with given sum using two pointers method
bool findSubarrayWithSum(int arr[], int n, int x) {
    int left = 0, right = 0, current_sum = 0;

    // Iterate through the array
    while (right < n) {
        // Add elements to current_sum until it is greater than or equal to x
        while (current_sum < x && right < n) {
            current_sum += arr[right];
            right++;
        }

        // If current_sum becomes equal to x, return true
        if (current_sum == x) {
            cout << "Subarray found from index " << left << " to " << right - 1 << endl;
            cout << "Subarray elements are: ";
            for (int i = left; i < right; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            return true;
        }

        // Move the left pointer to reduce the current_sum
        while (current_sum > x && left < right) {
            current_sum -= arr[left];
            left++;
        }

        // If current_sum becomes equal to x after moving left pointer, return true
        if (current_sum == x) {
            cout << "Subarray found from index " << left << " to " << right - 1 << endl;
            cout << "Subarray elements are: ";
            for (int i = left; i < right; i++) {
                cout << arr[i] << " ";
            }
            cout << endl;
            return true;
        }
    }

    // If no subarray with sum x is found, return false
    cout << "No subarray with sum " << x << " found." << endl;
    return false;
}

int main() {
    int n, x;

    // Ask user for the number of elements in the array
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];  // Declare the array with size n

    // Input the elements of the array
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Ask user for the target sum
    cout << "Enter the target sum: ";
    cin >> x;

    // Call the function to find subarray with given sum
    findSubarrayWithSum(arr, n, x);

    return 0;
}
