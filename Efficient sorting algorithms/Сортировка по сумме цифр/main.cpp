#include "bits/stdc++.h"

using namespace std;
typedef vector<int> vi;

int sumDigits(int num){
    int sum = 0;
    num = abs(num);
    while(num>0){
        sum+=num%10;
        num/=10;
    }
    return sum;
}

bool cmp(int x,int y){
    return sumDigits(x)> sumDigits(y);
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vi a(n);
    for(int i = 0;i<n;++i){
        cin>>a[i];
    }

    stable_sort(a.begin(),a.end(), cmp);

    for(auto i : a){
        cout<<i<<" ";
    }

    return 0;
}
