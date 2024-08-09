#include <iostream>
#include <vector>
#include <set>

#define ll long long
using namespace std;

ll fast_pow(ll a, ll n, ll mod) {
    ll result = 1;
    while (n > 0) {
        if (n % 2 != 0) {
            result = (result * a) % mod;
        }
        a = (a * a) % mod;
        n /= 2;
    }
    return result;
}

vector<int> decomp(int n) {
    vector<int> ans;
    int d = 2;
    while (d * d <= n) {
        if (n % d == 0) {
            ans.push_back(d);
            n /= d;
        } else {
            d++;
        }
    }
    if (n > 1) {
        ans.push_back(n);
    }
    return ans;
}

int main() {
    int a;
    cin >> a;

    if (a == 1) {
        cout << 1 << endl;
        return 0;
    }

    vector<int> b = decomp(a);
    set<int> a_set(b.begin(), b.end());
    vector<int> a_v(a_set.begin(), a_set.end());

    ll y = 1;
    for (size_t i = 0; i < a_v.size(); ++i) {
        y *= a_v[i];
    }

    if (a == y) {
        cout << a << endl;
        return 0;
    }

    ll n;
    for (ll i = 1; ; ++i) {
        n = i * y;
        if (fast_pow(n, n, a) == 0) {
            cout << n << endl;
            break;
        }
    }

    return 0;
}
