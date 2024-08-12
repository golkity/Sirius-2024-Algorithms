#include <iostream>
#include <cmath>
#define ll long long
using namespace std;

bool is_prime(int n) {
    if (n < 2) return false;
    for (int d = 2; d < n; ++d) {
        if (n % d == 0) return false;
    }
    return true;
}

ll factorial_exponent(int n, ll p) {
    ll s = 0;
    ll t = n / p;
    while (t > 0) {
        s += t;
        t /= p;
    }
    return s;
}

ll factorial_n_divisors(int n) {
    ll p = 1;
    for (int i = 0; i <= n; ++i) {
        if (is_prime(i)) {
            ll a = factorial_exponent(n, i);
            p *= (a + 1);
        }
    }
    return p;
}

int main() {
    int n;
    cin >> n;
    cout << factorial_n_divisors(n) << endl;
    return 0;
}
