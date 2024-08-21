#include "bits/stdc++.h"

using namespace std;
typedef vector<int> vi;

int f(vi& a, int n){
    int L = -1;
    int R = a.size();
    while(R-L>1){
        int m = (R+L)/2;
        if(a[m]<n){
            L=m;
        }else{
            R=m;
        }
    }
    return R;
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,m;
    cin>>n;
    vi a(n);
    for(int i = 0;i<n;++i){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    cin>>m;
    vi b(m);
    for(int i = 0;i<m;++i){
        cin>>b[i];
    }
    for(int i = 0;i<m;++i){
        int result = f(a,b[i]);
        cout<<result<<" ";
    }
    return 0;
}
