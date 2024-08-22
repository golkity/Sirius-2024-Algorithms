#include "bits-stdc++.h"

using namespace std;
typedef vector<int> vi;

bool ok(vi& a, int n, int k, int m_v) {
    int cur_s = 0;
    int ru_s = 1;

    for (int i = 0; i < n; ++i) {
        if (cur_s + a[i] > m_v) {
            ru_s++;
            cur_s = a[i];
            if (ru_s > k) {
                return false;
            }
        } else {
            cur_s += a[i];
        }
    }
    return true;
}

int binary_s(int max_v, int sum, int n, int k, vi& a) {
    int l = max_v;
    int r = sum;
    while (r > l) {
        int m = (r + l) / 2;
        if (ok(a, n, k, m)) {
            r = m;
        } else {
            l = m + 1;
        }
    }
    return l;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vi a(n);
    int sum = 0;
    int max_v = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        sum += a[i];
        max_v = max(max_v, a[i]);
    }

    int k;
    cin >> k;

    cout << binary_s(max_v, sum, n, k, a) << endl;

    return 0;
}
