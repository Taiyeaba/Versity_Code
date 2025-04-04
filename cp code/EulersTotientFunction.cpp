#include <iostream>
using namespace std;

int phi(int n) {
    int result = n;
    for (int p = 2; p * p <= n; p++) {
        if (n % p == 0) {
            while (n % p == 0)
                n /= p;
            result -= result / p;
        }
    }
    if (n > 1)
        result -= result / n;
    return result;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << "Euler's Totient Function φ(" << n << ") = " << phi(n) << endl;
    return 0;
}
/*
👉 φ(10) = 4 মানে: 1 থেকে 10 এর মধ্যে যেসব সংখ্যা 10-এর সাথে co-prime, তারা হলো:
{1, 3, 7, 9} → মোট ৪টি সংখ্যা ✅

ইনপুট:
Enter a number: 12
আউটপুট:
Euler's Totient Function φ(12) = 4
*/