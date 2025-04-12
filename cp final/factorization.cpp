#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
    cout<<"Enter a number : ";
    int num;
    cin>>num;

    vector<int>factors;

    for(int fact=1; fact<=sqrt(num); fact++)
    {
        if(num%fact == 0)
        {
            factors.push_back(fact);
            if(fact!=num/fact)
            {
                factors.push_back(num/fact);
            }
        }
    }
    sort(factors.begin(),factors.end());
    cout<<"The divisors of the number are : ";
    for(auto ans:factors)
    {
        cout<<ans<<" ";
    }


    return 0;
}
/*

Enter a number : 12
The divisors of the number are : 1 2 3 4 6 12

je number dara 12 k vag korle vagses 0 hobe seti divisors


*/