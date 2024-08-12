#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void solve(int n) {
    int d = 0;

    while (n % 2 == 0) {
        d++;
        n /= 2;
    }

    vector<int> a(d, 2);

    if (d > 0) {
        a[d - 1] *= n;
    }

    if (d == 1) {
        cout << "prime" << std::endl;
        return;
    }

    for (int x = 3; x <= sqrt(n) + 1; x += 2) {
        if (n % x == 0) {
            vector<int> b = a;
            b[d - 1] /= x;
            if (d > 1) {
                b[d - 2] *= x;
            } else {
                b.push_back(x);
            }
            cout << "many" <<endl;
            for (int i : a) cout << i << " ";
            cout << endl;
            for (int i : b) cout << i << " ";
            cout << endl;
            return;
        }
    }

    cout << "single" << endl;
    for (int i : a) cout << i << " ";
    cout << endl;
}

int main() {
    int n;
    cin>>n;

    solve(n);
    return 0;
}
