//write a program to concatenate two lists
#include<bits/stdc++.h>
using namespace std;

int main(){
   list<int> list1{1,5,8};
  list<int> list2{9,4,15};
  list1.merge(list2);
  cout<<"Merged List: ";
  for(auto i = list1.begin(); i != list1.end(); i++){
    cout<<*i<<" ";
  }
}
