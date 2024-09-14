//Replace all occurrences ofb a specific value in a list.
#include<bits/stdc++.h>
using namespace std;

int main(){
   list<int>a{2,3,4,5,6,1,2,4,6,5};
   int old,newV;
   cout<<"To replace: ";
   cin>>old;
   cout<<"With: ";
   cin>>newV;
   for(auto i = a.begin(); i != a.end(); i++){
    if(*i == old){
        *i=newV;
    }
cout<<*i<<" ";
   }
}
