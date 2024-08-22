#include "bits-stdc++.h"

using namespace std;
typedef vector<int> vi;
#define ll long long
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    ll n;
    cin>>n;
    vi a(n);

    for(ll i = 0;i<n;++i){
        cin>>a[i];
    }

    sort(a.begin(),a.end());

    ll cnt = 0;

    for(ll i = 0;i<n-2;++i){
        for(ll j = i + 1;j<n-1;++j){
            ll s = a[i]+a[j];
            auto k = lower_bound(a.begin()+j+1,a.end(),s)-a.begin();
            cnt += (k-j-1);
        }
    }

    cout<<cnt<<endl;

    return 0;
}
