#include<iostream>
using namespace std;

void printLCS(const char* str1,const char* str2)
{
    int m = 0,n =0;

    while(str1[m] != '\0')
        m++;
    while(str1[n] != '\0')
        n++;

    int dp[m+1][n+1];
    for (int i=0; i<=m; i++)
    {
        for (int j=0; j<=m; j++)
        {
            if(i == 0 || j == 0)
            {
                dp[i][j]=0;
            }
            else if(str1[i-1] == str2[j-1])
            {
                dp[i][j] = dp[i-1][j-1]+1;
            }
            else
            {
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }

        }
    }
    int index=dp[m][n];
    char lcs[index + 1];
    lcs[index]='\0';

    int i =m,j=n;
    while(i>0 && j>0)
    {
        if(str1[i-1] == str2[j-1])
        {
            lcs[--index] = str1[i-1];
            i--;
            j--;
        }
        else if(dp[i-1][j]>dp[i][j-1])
        {
            i--;

        }
        else
        {
            j--;
        }
    }

    cout<<"LCS Table:\n";
    for(int i=0; i<=m; i++)
    {
        for(int j=0; j<=n; j++)
        {
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Longest Common Subsequence: "<<lcs<<endl;
}

int main()
{
    char str1[100],str2[100];

    cout<<"Enter first String: ";
    cin>>str1;

    cout<<"Enter second String: ";
    cin>>str2;

    printLCS(str1,str2);
    return 0;

}
/*
Enter first String: president
Enter second String: providence
LCS Table:
0 0 0 0 0 0 0 0 0 0
0 1 1 1 1 1 1 1 1 1
0 1 2 2 2 2 2 2 2 2
0 1 2 2 2 2 2 3 3 3
0 1 2 2 2 2 2 3 3 3
0 1 2 2 2 3 3 3 3 3
0 1 2 2 2 3 4 4 4 4
0 1 2 2 2 3 4 5 5 5
0 1 2 2 2 3 4 5 6 6
0 1 2 2 2 3 4 5 6 6
Longest Common Subsequence: priden

Process returned 0 (0x0)   execution time : 58.527 s
Press any key to continue.
*/









