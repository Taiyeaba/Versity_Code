//to find the second largest element in a vertor.
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec = {5, 3, 8, 1, 6, 4, 2, 7};

    if (vec.size() < 2)
    {
        cout << "Vector does not have enough elements.";
        return 1;
    }

    sort(vec.begin(), vec.end());

    int secondLargest = vec[vec.size() - 2];

    cout << "Second largest element: " << secondLargest << endl;

    return 0;
}

