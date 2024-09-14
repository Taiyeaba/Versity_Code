
#include<iostream>
using namespace std;

void mergeArrays(int array1[], int array2[], int merge[], int s1, int s2)
{
    int k = 0;
    for (int i = 0; i < s1; i++)
    {
        merge[k++] = array1[i];
    }

    for (int i = 0; i < s2; i++)
    {
        merge[k++] = array2[i];
    }
}

int main()
{
    int array1[20], array2[20], merge[50];
    int s1, s2;

    cout << "Enter the size of 1st array: ";
    cin >> s1;

    cout << "Enter elements of the 1st array: ";
    for (int i = 0; i < s1; i++)
    {
        cin >> array1[i];
    }

    cout << "Enter the size of 2nd array: ";
    cin >> s2;

    cout << "Enter elements of the 2nd array: ";
    for (int i = 0; i < s2; i++)
    {
        cin >> array2[i];
    }

    mergeArrays(array1, array2, merge, s1, s2);

    cout << "Merged array: ";
    for (int i = 0; i < s1 + s2; i++)
    {
        cout << merge[i] << " ";
    }

    return 0;
}

//array merge with function...
