#include <iostream>
#include <vector>
using namespace std;

// Merge function for two sorted arrays
void mergeSortedArrays(const vector<int>& arr1, const vector<int>& arr2, vector<int>& mergedArray) {
    int i = 0, j = 0;

    // Merge until one of the arrays is exhausted
    while (i < arr1.size() && j < arr2.size()) {
        if (arr1[i] <= arr2[j]) {
            mergedArray.push_back(arr1[i]);
            i++;
        } else {
            mergedArray.push_back(arr2[j]);
            j++;
        }
    }

    // Append remaining elements
    while (i < arr1.size()) {
        mergedArray.push_back(arr1[i]);
        i++;
    }

    while (j < arr2.size()) {
        mergedArray.push_back(arr2[j]);
        j++;
    }
}

// Merge Sort for merged array (if needed for consistency or further sorting)
void mergeSort(vector<int>& array, int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(array, left, mid);
        mergeSort(array, mid + 1, right);

        vector<int> temp;
        int i = left, j = mid + 1;
        while (i <= mid && j <= right) {
            if (array[i] <= array[j]) temp.push_back(array[i++]);
            else temp.push_back(array[j++]);
        }
        while (i <= mid) temp.push_back(array[i++]);
        while (j <= right) temp.push_back(array[j++]);

        for (int k = left; k <= right; ++k)
            array[k] = temp[k - left];
    }
}

int main() {
    int n1, n2;
    cout << "Enter the number of sales figures in Region 1: ";
    cin >> n1;
    vector<int> region1(n1);
    cout << "Enter " << n1 << " sorted sales figures for Region 1:\n";
    for (int i = 0; i < n1; ++i) cin >> region1[i];

    cout << "Enter the number of sales figures in Region 2: ";
    cin >> n2;
    vector<int> region2(n2);
    cout << "Enter " << n2 << " sorted sales figures for Region 2:\n";
    for (int i = 0; i < n2; ++i) cin >> region2[i];

    vector<int> mergedSales;
    mergeSortedArrays(region1, region2, mergedSales);

    cout << "Merged Sales Data: ";
    for (int value : mergedSales) cout << value << " ";
    cout << endl;

    return 0;
}
