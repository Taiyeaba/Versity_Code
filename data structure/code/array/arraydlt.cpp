#include<iostream>
using namespace std;

void Array_D(int arr[], int size, int index)
{



for(int i= index; i< size -1; i++)
    {
        arr[i]= arr[i+1];


    }
    size -= 1;
        cout<<"After deletion";
    for(int i=0; i<size; i++)
    {
       cout<<arr[i]<<" ";

    }



}

int main ()
{
    int arr[20];
    int size;
    int index;

    cout<<"Enter the size of array";
    cin>>size;

    cout<<"Enter the elements of array";
    for(int i= 0; i< size; i++)
    {
        cin>>arr[i];
    }

    //Deletion
    cout<<"Enter the index which you wanna delete from the array";
    cin>>index;

    Array_D(arr,size, index);


}
//array deletion with function
