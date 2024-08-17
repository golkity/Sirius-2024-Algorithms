#include "iostream"
#include "vector"

using namespace std;

void partial_selection_sort(vector<int> &a, int k) {
    for (int i = 0; i < k; ++i) {
        int imax = i;
        for (int j = i + 1; j < a.size(); ++j) {
            if (a[j] > a[imax]) {
                imax = j;
            }
        }
        swap(a[i], a[imax]);
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
    }
    partial_selection_sort(p, k);
    cout << p[k-1] << endl;
    return 0;
}
