#include<iostream>
using namespace std;

int*sss(int arr[],int n)
{
    for(int i=0; i<n-1; i++)
    {
        int min_index=i;
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[min_index])
            {
                min_index=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
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
    int*result=sss(arr,n);
    cout << "Sorted array: ";
    for(int i=0; i<n; i++)
    {
        cout<<result[i]<<" ";
    }

}
