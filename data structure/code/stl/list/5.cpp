//write a program to delete an element at a specific position in a list.
#include<bits/stdc++.h>
using namespace std;

int main(){
   list<int>a{6,2,4,5,8,3,7};
   cout<<"Initial: ";
 for(auto i = a.begin(); i != a.end(); i++){
    cout<<*i<<" ";
 }
 cout<<endl<<"Type the position of element you want to remove: ";
 int pos;
 cin>>pos;
 if(pos >=0 && pos<a.size()){
    auto p =a.begin();
    advance(p,pos);
    a.erase(p);
 }
 else cout<<"Invalid position entered";
 cout<<"Current: ";
 for(auto i = a.begin(); i != a.end(); i++){
    cout<<*i<<" ";
 }
}
