
#include<iostream>
using namespace std;

int main()
{
    int n,w,maxW,take,leave;

     cout<<"Max Weight: ";
     cin>>maxW;

     cout<<"Items: ";
     cin>>n;

     int weight[n+1],value[n+1];
     int v[n+1][maxW+1];

     cout<<"Weight & value:"<<endl;

     for(int i=0; i<=n; i++)
     {
         cout<<"Item "<<i<<": ";
         cin>>weight[i]>>value[i];
     }
     for(int i=0; i<=n; i++)
     {
         for(w=0;w<=maxW;w++)
         {
             if(i==0 || w==0)
             {
                 v[i][w] = 0;
             }
             else if(weight[i]>w)
             {
                 v[i][w] =  v[i-1][w];
             }
             else
             {
                 leave =  v[i-1][w];
                 take = value[i]+v[i-1][w-weight[i]];
                  v[i][w] = max(take,leave);
             }
         }
     }

     cout<<"Maximum profit: "<<v[n][maxW]<<endl;
     cout<<" Items: ";

     int i=n;
     w=maxW;

     while(i>0 && w>0)
     {
         if(v[i-1][w] != v[i][w])
         {
             cout<<i<<" ";
             w=w-weight[i];
             i--;
         }
         else i--;
     }
}
/*
Max Weight: 5
Items: 4
Weight & value:
Item 0: 0 0
Item 1: 3 100
Item 2: 2 20
Item 3: 4 60
Item 4: 1 40
Maximum profit: 140
 Items: 4 1
Process returned 0 (0x0)   execution time : 124.810 s
Press any key to continue.


*/
