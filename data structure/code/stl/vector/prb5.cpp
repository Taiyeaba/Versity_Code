//write a function to remove all occurences of a specificed element from a vector.
#include <iostream>
#include <vector>
using namespace std;

void removeOccurrences(vector<int>& vec, int target)
{
    vector<int> result;

    for (int num : vec)
    {
        if (num != target)
        {
            result.push_back(num);
        }
    }
    vec = result;
}

int main()
{
    vector<int> vec = {5, 3, 8, 1, 6, 4, 2, 7, 5, 5};
    int elementToRemove = 5;

    removeOccurrences(vec, elementToRemove);

    for (int num : vec)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

