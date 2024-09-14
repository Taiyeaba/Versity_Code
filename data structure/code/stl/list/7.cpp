//check to see if the elements in a list r in palindrome order.
#include<bits/stdc++.h>
using namespace std;

int main(){
   list<int>a{1,2,3,2,1};
   bool ispal = true;
   auto s = a.begin();
   auto e = a.end();
   e--;

 while(s != e){
    if(*s != *e){
        ispal = false;
        break;
    }
    s++;
    e--;

 }
if(ispal) cout<< " the list in palindrome order";
else cout << " the list is not in palindrome order";
}
