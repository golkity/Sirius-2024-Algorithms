#include "bits/stdc++.h"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    multiset<long long> popul;
    long long pass = 0;
    for(int i = 0;i<n;++i){
        long long el;
        cin>>el;
        popul.insert(el);
    }

    while(popul.size()>1){
        auto it = popul.begin();
        long long f = *it;
        popul.erase(it);

        it = popul.begin();
        long long s = *it;
        popul.erase(it);

        long long t_p = f+s;
        pass +=t_p;
        popul.insert(t_p);
    }

    cout<<pass<<endl;

    return 0;
}
