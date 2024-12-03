//QuickSort
#include<iostream>
using namespace std;
int Partition (int A[], int p, int r)
{
    int x = A[r];
    int i = p-1;
    int j = 0;
    for (int j=p; j<=r-1;j++)
    {
        if(A[j] <=x)
        {
            i++;
            swap (A[i], A[j]);
        }
    }
    swap(A[i+1], A[r]);
    return i+1;
}
void quickSort(int A[], int p, int r)
{
    if(p<r)
    {
        int q = Partition(A,p,r);
        quickSort(A,p,q-1);
        quickSort(A,q+1,r);
    }
}
int main()
{
    int n;
    cout<< "How Many Numbers: ";
    cin>>n;
    int A[n];
    cout << "Enter " << n << " Numbers: " << endl;
    for(int i = 0; i<n; i++)
        cin >>A[i];
    quickSort(A,0,n-1);
    cout<< "After Sorting: " << endl;
    for(int i = 0; i<n; i++)
    cout<< A[i] << " ";
    return 0;
}
