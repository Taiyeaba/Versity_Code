//binary search
#include <iostream>
#include <vector>
using namespace std;


int binarySearch(vector<int>& vec, int skey)
{
    int left = 0;
    int right = vec.size() - 1;

    while (left <= right)
    {
        int mid = (left+right) / 2;

        if (vec[mid] == skey)
        {
            return mid;
        }
        else if (vec[mid] < skey)
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    int skey = 5;

    int index = binarySearch(vec, skey);

    if (index != -1)
    {
        cout << "Element " << skey << " found at index " << index << endl;
    }
    else
    {
        cout << "Element " << skey << " not found in the vector." << endl;
    }

    return 0;
}










