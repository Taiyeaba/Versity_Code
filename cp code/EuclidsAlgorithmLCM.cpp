#include <iostream>
using namespace std;

// Function to compute GCD using Euclid's algorithm
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

// Function to compute LCM using GCD
int lcm(int a, int b) {
    return (a / gcd(a, b)) * b;  // To prevent overflow
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "GCD of " << a << " and " << b << " is: " << gcd(a, b) << endl;
    cout << "LCM of " << a << " and " << b << " is: " << lcm(a, b) << endl;

    return 0;
}
/*

lo sa gu

*/