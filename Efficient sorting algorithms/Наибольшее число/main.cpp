#include "bits-stdc++.h"

using namespace std;

typedef vector<int> vi;

void pods_sort(vi& a) {
    vi cnt(10, 0);

    for (auto el : a)
        ++cnt[el];

    a.clear();

    for (int d = 9; d >= 0; --d) {
        a.insert(a.end(), cnt[d], d);
    }
}

int main() {
    string input;
    getline(cin, input);
    vi num;
    for (char c : input) {
        if (isdigit(c)) {
            num.push_back(c - '0');
        }
    }

    if (num.empty()) {
        cout << -1 << endl;
        return 0;
    }

    pods_sort(num);

    if (num[0] == 0) {
        cout << 0 << endl;
    } else {
        for (int n : num) {
            cout << n;
        }
        cout << endl;
    }

    return 0;
}
