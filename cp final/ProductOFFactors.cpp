
// Product of Factors

#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int

int main() {
    ll num;
    cout<<"enter the number: ";
    cin >> num;

    ll temp = num;
    ll total_fact = 1;
    ll lim = sqrt(num);

    for (ll div = 2; div <= lim; ++div) {
        ll power = 0;
        while (num % div == 0) {
            num /= div;
            power++;
        }
        if (power != 0) {
            total_fact *= (power + 1);
        }
    }

    if (num > 1) {
        total_fact *= 2;
    }

    // Product of all factors is num^(total_factors / 2)
    ll product_fact = pow(temp, total_fact / 2);

    cout << "Product of factors: " << product_fact << endl;
    return 0;
}
