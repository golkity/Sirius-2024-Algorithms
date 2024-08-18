#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;


int main(){
    int n;
    cin>>n;
    vi a(n);
    for(int i = 0;i<n;++i){
        cin>>a[i];
    }

    int k;
    cin>>k;
    vi dup(k);
    for(int i = 0;i<k;++i){
        int key;
        cin>>key;
        dup[key-1]++;
    }

    for(int i = 0;i<n;++i){
        if(a[i]<dup[i]){
            cout<<"yes"<<endl;
        }else{
            cout<<"no"<<endl;
        }
    }

    return 0;
}
