#include "bits/stdc++.h"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,el;
    cin>>n;
    set<int> a;

    for(int i = 0;i<n;++i){
        cin>>el;
        a.insert(el);
    }
    int res = (n-a.size());
    cout<<n-res<<endl;


    return 0;
}
