//write a program that takes integers as input in a list and displays the elements.
#include<bits/stdc++.h>
using namespace std;

int main(){
     list<int>a;
     cout<<"enter 5 elements: ";
     for(int i=0;i<5;i++){
        int input;
        cin>>input;
        a.push_back(input);
     }

cout<<"Display elements in a list: ";
for(auto i=a.begin(); i != a.end(); i++){
    cout<< *i<<" ";
}


}
