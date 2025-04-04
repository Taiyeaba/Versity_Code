#include<bits/stdc++.h>
using namespace std;

int isPrime(int num)
{
    for(int i=2;i<=sqrt(num); i++)
    {
        if(num%i==0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    cout<<"Please Enter a number greater than 1 : ";
    int num;
    cin>>num;

    if(isPrime(num))
    {
        cout<<"The Number is Prime"<<endl;
    }
    else
    {
        cout<<"The Number is not Prime"<<endl;
    }


}


/*
Please Enter a number greater than 1 : 12
The Number is not Prime

Please Enter a number greater than 1 : 7
The Number is Prime

মৌলিক সংখ্যা(prime) হলো এমন একটি স্বাভাবিক সংখ্যা (Natural Number), যা কেবলমাত্র ১ এবং নিজে নিজে বিভাজ্য। অর্থাৎ, এর দুইটি মাত্র গুণনীয়ক (factor) থাকে: ১ এবং সংখ্যা নিজেই।
*/