#include<bits/stdc++.h>
using namespace std;

void showq(queue<int> &q)
{
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    int n = 5;
    queue<int> q;
    for(int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        q.push(input);
    }
    showq(q);
    return 0;

}
