#include "bits-stdc++.h"

using namespace std;
#define ll long long

bool ok(ll w, ll h, ll x, ll n) {
    return (x / w) * (x / h) >= n;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    ll w,h,n;
    cin>>w>>h>>n;
    ll l = max(w,h);
    ll r = l*n;
    while(r-l>1){
        ll m = (r+l)/2;
        if(ok(w,h,m,n)){
            r = m;
        }else{
            l = m;
        }
    }

    cout<<r<<endl;

    return 0;
}
