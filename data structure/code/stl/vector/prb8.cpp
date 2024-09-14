//implement a program to find the maximum and minimum elements in a vector
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec = {5, 3, 8, 1, 6, 4, 2, 7};

    if (vec.empty())
    {
        cout << "Vector is empty." <<endl;
        return 1;
    }


    int maxElement = vec[0];
    int minElement = vec[0];


    for (int num : vec)
    {
        if (num > maxElement)
        {
            maxElement = num;
        }
        if (num < minElement)
        {
            minElement = num;
        }
    }

    cout << "Maximum element in the vector: " << maxElement << endl;
    cout << "Minimum element in the vector: " << minElement <<endl;

    return 0;
}

