#include "bits/stdc++.h"

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, k;
    cin >> n;

    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }

    cin >> k;
    vector<int> b(k);
    for (int i = 0; i < k; ++i) {
        cin >> b[i];
    }

    sort(p.begin(), p.end());
    p.erase(unique(p.begin(), p.end()), p.end());

    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());

    if (p == b) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
