#include <iostream>
#include <vector>

using namespace std;

void inserting_sort(vector<int>& a) {
    int n = a.size();
    for (int i = 1; i < n; ++i) {
        int tmp = a[i];
        int j = i - 1;
        bool has_changed = false;

        while (j >= 0 && a[j] > tmp) {
            a[j + 1] = a[j];
            --j;
            has_changed = true;
        }
        a[j + 1] = tmp;

        if (has_changed) {
            for (int k = 0; k < n; ++k) {
                cout << a[k];
                if (k < n - 1) cout << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    inserting_sort(p);
    return 0;
}
