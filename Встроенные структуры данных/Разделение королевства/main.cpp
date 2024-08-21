#include "bits-stdc++.h"

using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<pair<ll, ll>> cord;
    set<ll> x,y;
    for(int i = 0;i<n;++i){
        ll qw,we;
        cin>>qw>>we;
        cord.push_back(make_pair(qw,we));
    }
    sort(cord.begin(),cord.end());

    for(int i = 0;i<n-1;i++){
        if(cord[i+1].first == cord[i].first && cord[i+1].second>cord[i].second){
            y.insert(cord[i].second+1);
        }else{
            x.insert(cord[i].first+1);
        }
    }
    cout<<y.size()+x.size()<<endl;
    for(auto i:y){
        cout<<"y "<<i<<endl;
    }
    for(auto i : x){
        cout<<"x "<<i<<endl;
    }


    return 0;
}
