#include "bits-stdc++.h"

using namespace std;
typedef vector<int> vi;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n,k;
    cin>>n>>k;
    vi a(n);

    for(int i = 0;i<n;++i){
        cin>>a[i];
    }

    for(int i = 0;i<k;++i){
        int x;
        cin>>x;

        auto lower = lower_bound(a.begin(),a.end(),x);
        auto upper = upper_bound(a.begin(),a.end(),x);

        if(lower == a.end() || *lower!=x){
            cout<<"0\n";
        }else{
            int l_i = distance(a.begin(),lower)+1;
            int r_i = distance(a.begin(), upper)-1+1;
            cout<<l_i<<" "<<r_i<<"\n";
        }
    }

    return 0;
}
