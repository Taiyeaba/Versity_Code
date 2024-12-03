#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int used[10];
int pos[10];

void permutation(int index,int n)
{
    if(index == n)
    {

        for(int i=0; i<n; i++)
        {
            cout<<pos[i]<<" ";
        }
        cout<<endl;
        return;
    }

    for(int i=0; i<n; i++)
    {
        if(used[i] == 0)
        {
            used[i] = 1;
            pos[index]=i;
            permutation(index+1,n);
            used[i]=0;
        }
    }

}
int main()
{
	int n;

	cout<<"Enter a Number: ";
	cin>>n;

	for(int i=0; i<n; i++)
	{
		used[i]=0;
	}
	cout<<"permutation of first "<< n <<" Numbers are given"<<endl;
	permutation(0, n);
	return 0;
}
/*
Enter a Number: 3
permutation of first 3 Numbers are given
0 1 2
0 2 1
1 0 2
1 2 0
2 0 1
2 1 0
*/
