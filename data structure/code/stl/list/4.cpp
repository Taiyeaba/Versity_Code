//write a program to find the second smallest element in a list.
#include<bits/stdc++.h>
using namespace std;

int main(){
   list<int>a{6,2,4,5,8,3,7};
   int small = *a.begin();
    int second = *a.begin();
    for(auto i=a.begin(); i != a.end(); i++){
        if(*i <small){
            second = small;
            small = *i;
        }
        if(*i < second && *i>small) second = *i;
    }
  cout<<"second smallest element in the list: "<< second;
}
