//write a program that reverses a list without reverse().
#include<bits/stdc++.h>
using namespace std;

int main(){
   list<int>a{1,2,3,4,5};
   list<int>rev_a;
   for(auto i = a.rbegin(); i != a.rend(); i++){
    rev_a.push_back(*i);
   }
cout<<"Initial List: ";
for(auto i = a.begin(); i != a.end(); i++){
    cout<<*i<<" ";
}

cout<<endl<<"Reversed List: ";
for(auto i = rev_a.begin(); i != rev_a.end(); i++){
    cout<<*i<<" ";
}
}
