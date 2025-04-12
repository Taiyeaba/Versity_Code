#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
    int left = 0, right = s.size() - 1;

    while (left < right) {

        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;


        if (tolower(s[left]) != tolower(s[right])) return false;


        left++;
        right--;
    }

    return true;
}

void solve(int cs) {
    string s;

    getline(cin, s);

    cout << (isPalindrome(s) ? "True" : "False") << '\n';
}

int32_t main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t, cs = 0;
    cin >> t;
    cin.ignore();
    while (t--) {
        solve(++cs);
    }

    return 0;
}
