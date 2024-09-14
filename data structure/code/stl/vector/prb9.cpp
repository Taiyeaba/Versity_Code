//to count the number even and odd in a vector
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec = {5, 3, 8, 1, 6, 4, 2, 7};

    if (vec.empty())
    {
        cout << "Vector is empty." << endl;
        return 1;
    }

    int evenCount = 0;
    int oddCount = 0;

    for (int num : vec)
    {
        if (num % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    cout << "Number of even numbers in the vector: " << evenCount << endl;
    cout << "Number of odd numbers in the vector: " << oddCount << endl;

    return 0;
}

