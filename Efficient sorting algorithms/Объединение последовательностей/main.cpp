#include "bits/stdc++.h"

using namespace std;

int main() {
    uint64_t x; cin >> x;
    uint64_t i = 1, j = 1, a = 1, b = 1;
    uint64_t res = 0;
    while (x) {
        if (a <= b) {
            x += a == b;
            res = a;
            i += 1;
            a = pow(i, 2);
        }
        else {
            res = b;
            j += 1;
            b = pow(j, 3);
        }
        x -= 1;
    }
    cout << res;
    return 0;
}
