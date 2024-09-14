#include<iostream>
using namespace std;

int*BSS(int arr[],int n){
for(int i=0;i<n-1;i++){
for(int j=0;j<n-1;j++){
if(arr[j]>arr[j+1]){
        int temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;


        }
    }
}
return arr;
}
int main(){
int arr[100]={4,2,5,6,7};
int n=5,temp;
int*result=BSS(arr,n);
for(int i=0;i<n;i++){
    cout<<result[i]<<" ";
}

}
