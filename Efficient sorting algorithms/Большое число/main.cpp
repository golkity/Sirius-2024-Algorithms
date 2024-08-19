#include "bits/stdc++.h"

using namespace std;
typedef vector<string> vs;

bool cmp(string& x,string& y){
    return x+y>y+x;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vs a(n);

    for(int i = 0;i<n;++i){
        cin>>a[i];
    }

    sort(a.begin(),a.end(),cmp);

    for(auto s : a){
        cout<<s;
    }

    return 0;
}
