//write a program that delets the last element in a list until none left
#include<bits/stdc++.h>
using namespace std;

int main(){
   list<int>a{1,2,3,4,5};
   int caseCount = 0;
   cout<<"Initial List: ";
   for(auto i =a.begin(); i!=a.end(); i++){
     cout<<*i<<" ";
   }
  cout<<endl;
  while(a.size() != 0){
    cout<<"case "<<caseCount +1<<" : ";
    a.pop_back();
    for(auto i=a.begin(); i !=a.end(); i++){
        cout<< *i << " ";

   }
cout<<endl;
caseCount++;

}

}
