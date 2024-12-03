#include<iostream>
using namespace std;

void Merge(int A[],int p,int q,int r)
{
    int n1 = q-p+1;
    int n2 = r-q;
    int L[n1+1], R[n2+1];

    for(int i=0 ; i<n1 ; i++)
    L[i] = A[p+i];

    for(int j=0 ; j<n2 ; j++)
        R[j] = A[q+1+j];

    L[n1] = INT_MAX;
    R[n2] = INT_MAX;

    int k, i = 0, j = 0;

    for(k=p;k<=r;k++)
    {
        if(L[i] <= R[j])
        {
            A[k] = L[i];
            i++;
        }
        else
        {
            A[k] = R[j];
            j++;
        }
    }
}
void mergeSort(int A[],int p, int r)
{
  if(p<r)
  {
      int q = (p+r)/2;

      mergeSort(A,p,q);
      mergeSort(A,q+1,r);
      Merge(A,p,q,r);
  }
}
int main()
{
    int n;

    cout<< "How many numbers: ";
    cin>>n;
    int A[n];

    cout<<"Enter " << n << " Numbers: "<<endl;
    for(int i=0;i<n;i++)
        cin>>A[i];

    mergeSort(A,0,n-1);

    cout<< "After Sorting: "<<endl;
     for(int i=0;i<n;i++)
        cout<< A[i]<<' ';

        return 0;
}


/* OUTPUT
How many numbers: 5
Enter 5 Numbers:
34
56
75
3
5
After Sorting:
3 5 34 56 75
*/
