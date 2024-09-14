//implement a function to remove the smallest element from a vector until its empty
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


void removeSmallestUntilEmpty(vector<int>& vec)
{
    while (!vec.empty())
    {
        auto smallest = min_element(vec.begin(), vec.end());
        vec.erase(smallest);
    }
}

int main()
{
    vector<int> vec = {5, 3, 8, 1, 6, 4, 2, 7};

    cout << "Original vector:" << endl;
    for (int num : vec)
    {
        cout << num << " ";
    }
    cout <<endl;

    removeSmallestUntilEmpty(vec);

    cout << "Vector after removing smallest elements:" <<endl;
    for (int num : vec)
    {
       cout << num << " ";
    }
   cout << endl;

    return 0;
}

