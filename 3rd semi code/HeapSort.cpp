
//heapsort
#include <iostream>
using namespace std;

void MaxHeapify(int A[], int i, int n) {
    int lrg = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;

    if (l < n && A[l] > A[lrg])
        lrg = l;
    if (r < n && A[r] > A[lrg])
        lrg = r;

    if (lrg != i) {
        swap(A[i], A[lrg]);
        MaxHeapify(A, lrg, n);
    }
}

void BuildMaxHeap(int A[], int n) {
    for (int i = (n / 2) - 1; i >= 0; i--) {
        MaxHeapify(A, i, n);
    }
}

void HeapSort(int A[], int n) {
    BuildMaxHeap(A, n);
    for (int i = n - 1; i > 0; i--) {
        swap(A[0], A[i]);
        MaxHeapify(A, 0, i);
    }
}

int main() {
    int n;
    cout << "How Many Numbers: ";
    cin >> n;
    int A[n];
    cout << "Enter " << n << " Numbers: " << endl;
    for (int i = 0; i < n; i++)
        cin >> A[i];
    HeapSort(A, n);
    cout << "After Sorting: " << endl;
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
    return 0;
}
