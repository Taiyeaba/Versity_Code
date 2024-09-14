
//to search for an element in an array of integers using liner search.
#include<iostream>
using namespace std;

int main(){
int num[]={10,2,15,20,35,46,85};
int value,pos=-1,i;

  cout<<"enter the value: ";
  cin>>value;

  for(i=0;i<7;i++){
  if(value==num[i]){
   pos=i+ 1;
    break;
  }
} if(pos==-1){
    cout<<"item is not found";
} else{
    cout<<"the value is found "<<pos<<" position "<<endl;
}
return 0;

}
