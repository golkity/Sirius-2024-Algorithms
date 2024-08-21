#include "bits/stdc++.h"

using namespace std;

int binary_search(int n,int& s){
    int l = 1;
    int r = n;
    while(l<r){
        int m = (r+l)/2;
        s++;
        r=m;
    }
    return s;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    int cnt = 0;
    cin>>n;
    cout<<binary_search(n,cnt);

    return 0;
}
