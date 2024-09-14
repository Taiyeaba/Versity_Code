#include<iostream>
using namespace std;

int BS(int array[],int skey,int low,int high){

while(low<=high){
 int mid=(low+high)/2;
 if(array[mid]==skey){
    return mid;
 } else if(array[mid]>skey){

     high=mid-1;

 } else {

    low=mid+1;
 }
}
return -1;
}
int main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int low=0;
    int high=9;
    int skey;

    cout<<"enter the search value: ";
    cin>>skey;

    int result=BS(array,skey,low,high);
    if(result != -1){
        cout<<"the index of element is: "<<result<<endl;
    }else{
      cout<<"not found"<<endl;
    }
    return 0;
}
