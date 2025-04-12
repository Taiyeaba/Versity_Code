
#include <iostream>
#include <vector>  // Include vector header
#include <algorithm>  // Include algorithm for sort()

using namespace std;

bool twoSum(vector<int>& nums, int x) {
    sort(nums.begin(), nums.end()); // Sort the array
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int sum = nums[left] + nums[right];
        if (sum == x) {
            cout << "Found: " << nums[left] << " and " << nums[right] << endl;
            cout << "Their sum is: " << x << endl;
            cout << "Their indices are: " << left << " and " << right << endl;
            return true;
        } else if (sum < x)
            left++; // Move the left pointer to increase the sum
        else
            right--; // Move the right pointer to decrease the sum
    }

    cout << "No such values exist." << endl;
    return false;
}

int main() {
    vector<int> nums;
    int n, target;

    // Ask user for the number of elements
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    // Input the elements of the array
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        nums.push_back(num);
    }

    // Ask user for the target value
    cout << "Enter the target sum: ";
    cin >> target;

    // Call the twoSum function
    twoSum(nums, target);

    return 0;
}
