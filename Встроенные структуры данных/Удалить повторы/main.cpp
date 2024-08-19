#include "bits/stdc++.h"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string inp;
    cin>>inp;

    set<char> seen;
    string result;

    for(auto c : inp){
        if(seen.find(c) == seen.end()){
            result+=c;
            seen.insert(c);
        }
    }

    cout<<result;

    return 0;
}
