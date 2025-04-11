
#include <iostream>
#include <vector>
using namespace std;

// Binary Search function
bool binarySearch(const vector<int>& productIDs, int targetID) {
    int left = 0, right = productIDs.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (productIDs[mid] == targetID)
            return true;
        else if (productIDs[mid] < targetID)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return false;
}

int main() {
    int n, targetID;
    cout << "Enter the number of product IDs: ";
    cin >> n;

    vector<int> productIDs(n);
    cout << "Enter " << n << " sorted product IDs:\n";
    for (int i = 0; i < n; ++i)
        cin >> productIDs[i];

    cout << "Enter the target product ID to search: ";
    cin >> targetID;

    if (binarySearch(productIDs, targetID))
        cout << "Product ID found in inventory.\n";
    else
        cout << "Product ID NOT found in inventory.\n";

    return 0;
}
