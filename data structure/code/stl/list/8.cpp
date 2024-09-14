//print the element of a list in descanding order.
#include<bits/stdc++.h>
using namespace std;

int main(){
   list<int>a{4,2,9,6,1,3};
   a.sort();
   cout<<"Descending order: ";
   for(auto i = a.rbegin(); i != a.rend(); i++){
    cout<<*i<<" ";
   }
}
