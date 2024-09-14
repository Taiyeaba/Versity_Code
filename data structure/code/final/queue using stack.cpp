#include<bits/stdc++.h>
using namespace std;
int main(){

stack<int>st1;
int n;
cin>>n;

while(n--){
    int x;
    cin>>x;
    st1.push(x);

}
stack<int>st2;
while(!st1.empty()){
    st2.push(st1.top());
    st1.pop();
}

while(!st2.empty()){
    cout<<st2.top()<<endl;
    st2.pop();
}

return 0;


}
