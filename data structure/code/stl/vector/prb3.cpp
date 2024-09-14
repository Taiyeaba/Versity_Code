
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> vec = {5, 3, 8, 1, 6, 4, 2, 7};

    sort(vec.begin(), vec.end());

    for (int num : vec)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
