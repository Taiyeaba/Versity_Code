#include<bits/stdc++.h>
using namespace std;

int main(){

 int n,i,k;

 cout<<"How many activity? ";
 cin>>n;

 int s[n], f[n];

 cout<<"Enter times: "<<endl;
 for(i=0;i<n;i++){
    cout<<"Activity " << i <<endl;
    cout<<" Start: ";
    cin>>s[i];
    cout<<" Finish: ";
    cin>>f[i];
 }
vector<int>A;

A.push_back(0);
k=0;
for(i=1;i<n;i++)
    {
    if(s[i] >= f[k])
    {
        A.push_back(i);
        k=i;
    }
}
cout<< "Set: ";
for(i=0;i<A.size();i++)
    cout<< A[i]<<" ";

}
/*
How many activity? 6
Enter times:
Activity 0
 Start: 1
 Finish: 2
Activity 1
 Start: 3
 Finish: 4
Activity 2
 Start: 0
 Finish: 6
Activity 3
 Start: 5
 Finish: 7
Activity 4
 Start: 8
 Finish: 9
Activity 5
 Start: 5
 Finish: 9
Set: 0 1 3 4
*/

