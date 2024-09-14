//write a program to find the sum of all elements in a list.
#include<bits/stdc++.h>
using namespace std;

int main(){
   list<int>a{1,3,5,7,9};
   int sum = 0;
   for(auto i = a.begin(); i != a.end(); i++){
     sum += *i;
   }
   cout<<"Sum of all elements: "<<sum;
}
