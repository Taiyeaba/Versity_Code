
// Sum of Factors 

#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int

int main() {
    ll num;
  cout<<"enter the number: ";
    cin >> num;

    ll temp = num;
    ll sum_fact = 1;
    ll lim = sqrt(num);

    for (ll div = 2; div <= lim; ++div) {
        ll power = 0;
        while (num % div == 0) {
            num /= div;
            power++;
        }
        if (power != 0) {
            sum_fact *= (pow(div, power + 1) - 1) / (div - 1);
        }
    }

    if (num > 1) {
        sum_fact *= (num + 1);
    }

    cout << "Sum of factors: " << sum_fact << endl;
    return 0;
}
