#include "bits-stdc++.h"

using namespace std;
typedef vector<int> vi;

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
    sort(a.begin(),a.end());
    for(int i = 0;i<k;++i){
        cin>>b[i];
    }

    for(int i = 0;i<k;++i){
        if(binary_search(a.begin(),a.end(),b[i])){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
    }


    return 0;
}
