#include "iostream"
#include "vector"
#define ll long long
using namespace std;

ll gcd(ll a, ll b, ll &x, ll &y){
    if(a==0){
        x = 0;
        y = 1;
        return b;
    }
    ll x1,y1;
    ll cd = gcd(b%a, a, x1,y1);
    x = y1 - (b/a)* x1;
    y = x1;
    return cd;
}

ll mod(ll a, ll p){
    ll x,y;
    ll cd = gcd(a,p,x,y);
    if(cd!=1) return -1;

    return (x%p+p)%p;
}

int main(){
    int t;
    cin>>t;
    vector<ll> results;

    for (int i = 0; i < t; ++i) {
        ll p, a;
        cin >> p >> a;
        ll result = mod(a, p);
        results.push_back(result);
    }
    for (const auto& result : results) {
        cout << result << "\n";
    }

    return 0;
}
