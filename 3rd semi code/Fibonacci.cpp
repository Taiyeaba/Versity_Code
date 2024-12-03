//fibonacci dynamic problem
#include<iostream>
using namespace std;

long long m[100];

long long fib(int n)
{
    if(n <= 2)
        return 1;
    if(m[n] != -1)
        return m[n];
    else
    {
        m[n] = fib(n-1)+fib(n-2);
        return m[n];
    }
}
int main()
{
    int n;
    for(int i=0; i<100; i++)
        m[i]=-1;

    cout<<"which position: ";
    cin>>n;

    cout<<fib(n);
    return 0;
}
/*output
which position:10
ans:55
*/