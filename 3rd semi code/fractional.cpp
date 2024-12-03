
//Fractional Knapsack
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,maxW;
    cout << "Max W: "; cin >> maxW;
    cout << "Items: "; cin >> n;

    double weight[n], price [n];
    vector<pair<double, int>> v(n);

    cout << "Weight & price: " << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "Items " << i << ": ";
        cin >> weight[i] >> price[i];
    }

    for(int i = 0; i < n; i++)
    {
        v[i].first = price[i]/weight[i];
        v[i].second = i;
    }

    sort(v.rbegin(), v.rend(), [](const pair<int, int>& a, const pair<int, int>& b) {
        return a.first < b.first;
    });

    int w = 0;
    int totalp = 0;
    for(int i=0; i<n; i++){
        int x = weight[v[i].second];
        while(x--){
            if(w<maxW){
                totalp+=v[i].first;
                w++;
            }
        }
    }
    cout<<totalp;
}


