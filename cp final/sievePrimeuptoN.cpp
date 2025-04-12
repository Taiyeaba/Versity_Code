#include<bits/stdc++.h>
using namespace std;

void sieve(int n)
{
    bool isPrime[n+1];

    for(int i=0; i<=n; i++)
    {
        isPrime[i] = true;
    }

    isPrime[0]=isPrime[1]=false;

    for(int p=2; p*p<=n; p++)
    {
        if(isPrime[p])
        {
            for(int i=p*p; i<=n; i+=p)
            {
                isPrime[i]=false;
            }
        }
    }

    for(int i=2; i<=n; i++)
    {
        if(isPrime[i])
        {
            cout<<i<<" ";
        }
    }
}
int main()
{
    int n;
    cin>>n;

    sieve(n);
}
/*
✅ ইনপুট:10
মানে তুমি জানতে চাচ্ছো, ২ থেকে ১০ পর্যন্ত কোন কোন সংখ্যা প্রাইম।
 Output:2 3 5 7
*/
