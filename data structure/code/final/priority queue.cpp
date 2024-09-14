//Priority Queue
#include<bits/stdc++.h>
using namespace std;

void showq(priority_queue<int> &q)
{
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    priority_queue<int> q;
    for(int i = 0; i < n; i++)
    {
        int input;
        cin >> input;
        q.push(input);
    }
    showq(q);
    return 0;

}
