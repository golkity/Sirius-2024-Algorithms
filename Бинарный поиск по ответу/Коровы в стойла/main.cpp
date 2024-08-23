#include "bits-stdc++.h"

using namespace std;
typedef vector<int> vi;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vi a(n);
    for(int i = 0;i<n;++i){
        cin>>a[i];
    }
    sort(a.begin(),a.end());

    int left = 0;
    int right = a.back() - a.front() + 1;//18

    while (left < right) {
        int mid = (left + right) / 2;//9
        int cows = 1;
        int last = a[0];

        for (int i = 1; i < n; ++i) {
            if (a[i] - last > mid) {
                ++cows;
                last = a[i];
            }
        }

        if (cows >= k) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }

    cout<<left<<endl;

    return 0;
}
