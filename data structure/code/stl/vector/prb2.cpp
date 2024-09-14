

#include<bits/stdc++.h>
using namespace std;

void removeDuplicates(vector<int> &vec)
{
    vector<int> temp;
    for (int i = 0; i < vec.size(); ++i)
    {
        bool duplicate = false;
        for (int j = 0; j < temp.size(); ++j)
        {
            if (vec[i] == temp[j])
            {
                duplicate = true;
                break;
            }
        }
        if (!duplicate)
        {
            temp.push_back(vec[i]);
        }
    }
    vec = temp;
}

int main()
{
    vector<int> vec= {10,20,30,40,50,20,30};

    removeDuplicates(vec);

    cout << "Vector after removing duplicates:" << endl;
    for (int num : vec)
    {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}

