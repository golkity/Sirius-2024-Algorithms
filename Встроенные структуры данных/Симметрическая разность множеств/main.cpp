#include "bits/stdc++.h"

using namespace std;

typedef vector<int> vi;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,k,el;
    set<int> setA;
    set<int> setB;

    cin>>n;
    for(int i = 0;i<n;++i){
        cin>>el;
        setA.insert(el);
    }

    cin>>k;
    for(int i = 0;i<k;++i){
        cin>>el;
        setB.insert(el);
    }

    vi res;

    for(auto x : setA){
        if(setB.find(x) == setB.end())
            res.push_back(x);
    }

    for(auto x : setB){
        if(setA.find(x) == setA.end())
            res.push_back(x);
    }

    sort(res.begin(), res.end());

    cout<<res.size()<<endl;

    for(auto num : res){
        cout<<num<<" ";
    }

    return 0;
}
