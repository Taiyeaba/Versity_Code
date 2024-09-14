#include<bits/stdc++.h>
using namespace std;
int main(){

queue<int>qu;
int n;
cin>>n;

while(n--){
    int x;
    cin>>x;
    qu.push(x);

}
stack<int>st;
while(!qu.empty()){
    st.push(qu.front());
    qu.pop();
}

while(!st.empty()){
    cout<<st.top()<<endl;
    st.pop();
}

return 0;


}

