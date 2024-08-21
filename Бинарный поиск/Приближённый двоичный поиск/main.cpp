#include "bits-stdc++.h"

using namespace std;
typedef vector<int> vi;

int find_closesets(vi& a, int n){
    int l = -1;
    int r = a.size();
    while(r-l>1){
        int m = (r+l)/2;
        if(a[m]<n)
            l = m;
        else
            r = m;
    }

    if(l==-1){
        return a[0];
    }
    if(r == a.size()){
        return a[l];
    }
    if(abs(a[l]-n)<=(a[r]-n)){
        return a[l];
    }else{
        return a[r];
    }
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vi a(n);
    vi b(k);
    for(int i = 0;i<n;++i){
        cin>>a[i];
    }
    for(int i = 0;i<k;++i){
        cin>>b[i];
    }

    for(int i = 0;i<k;++i){
        cout<<find_closesets(a,b[i])<<endl;
    }

    return 0;
}
