#include "bits-stdc++.h"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin>>n>>m;

    map<string, int > w;

    for(int i = 0;i<m;++i){
        int value;
        string key;
        cin>>value>>key;
        w[key] = value;
    }

    vector<int> res(n,0);

    for(auto& pair : w){
        res[pair.second-1]+=1;
    }

    for(int i = 0;i<n;++i){
        cout<<res[i];
        if(i<n-1) cout<< " ";
    }

    return 0;
}
