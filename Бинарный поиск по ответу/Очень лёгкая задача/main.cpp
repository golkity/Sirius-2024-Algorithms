#include "bits-stdc++.h"

using namespace std;

bool ok(long long ans,int x,int y,int n){
    return ans/x + ans/y <n-1;
}

int binar(int n,int x,int y){
    long long l = -1;
    long long r = n*max(x,y);
    while(r-l>1){
        long long m = (r+l)/2;
        if(ok(m,x,y,n)){
            l = m;
        }else{
            r = m;
        }
    }
    return r + min(x,y);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,x,y;
    cin>>n>>x>>y;

    cout<<binar(n,x,y)<<endl;

    return 0;
}
