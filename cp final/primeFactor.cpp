
//prime factor

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout<<"enter the number: ";
    cin >> n;

    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
            while (n % i == 0)
                n /= i;
        }
    }
    if (n > 1) cout << n << endl;
}
