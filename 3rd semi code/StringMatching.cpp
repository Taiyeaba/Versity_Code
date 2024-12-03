
//String Matching 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string pattern;
    cout<<"Enter pattern: ";
    cin>>pattern;
    string s;
    cout<<"Enter String: ";
    cin>>s;
    int c;
    int ans=0;
    for(int i=0; i<s.length(); i++){
        int k=i;
        int c=0;
        for(int j=0; j<pattern.length(); j++){
            if(s[k]==pattern[j])c++;
            if(c==pattern.length())ans++;
            k++;
        }
    }
    cout<<"Number of matches: "<<ans;

}
/*
Enter pattern: abcab
Enter String: abcabcab
Number of matches: 2
Process returned 0 (0x0)   execution time : 70.306 s
Press any key to continue.
*/

/*
Enter pattern: am
Enter String: tamanna
Number of matches: 1
Process returned 0 (0x0)   execution time : 8.191 s
Press any key to continue.
*/

//pattern er sathe string jotobar milbe
