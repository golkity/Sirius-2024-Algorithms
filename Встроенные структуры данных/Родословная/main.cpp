#include "bits-stdc++.h"

using namespace std;

set<string> parents;
set<string> childs;
set<string> all;
map<string ,string >m1;
map<string, set<string >> m2;
map<string ,int> ans;

int f(string man,int i){
    if(parents.find(man) != parents.end()){
        for(auto child : m2[man]){
            ans[child] = f(child,i+1);
        }
    }
    return i;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;


    for(int i = 0;i<n-1;++i){
        string child, parent;
        cin>>child>>parent;
        m1[child] = parent;
        m2[parent].insert(child);
        parents.insert(parent);
        childs.insert(child);
        all.insert(parent);
        all.insert(child);
    }
    string z;
    for(auto c : parents){
        if(childs.find(c) == childs.end()){
            z = c;
            break;
        }
    }

    ans[z] = 0;
    f(z,0);

    for(auto c: ans){
        cout<<c.first<<" "<<c.second<<endl;
    }


    return 0;
}
