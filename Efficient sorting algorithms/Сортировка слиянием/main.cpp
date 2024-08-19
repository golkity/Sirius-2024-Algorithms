#include "bits-stdc++.h"

using namespace std;
typedef vector<int> vi;

vector<int> merge(vector<int> a, vector<int> b) {
    vector<int> res;
    int i = 0;
    int j = 0;
    while (i < a.size() && j < b.size()) {
        if (a[i] <= b[j])
            res.push_back(a[i++]);
        else
            res.push_back(b[j++]);
    }
    while (i < a.size())
        res.push_back(a[i++]);
    while (j < b.size())
        res.push_back(b[j++]);
    return res;
}
vector<int> msort(vector<int> a) {
    if (a.size() <= 1)
        return a;
    int k = a.size() / 2;
    return merge(
            msort(vector<int>(a.begin(), a.begin() + k)),
            msort(vector<int>(a.begin() + k, a.end())));
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin>>n;
    vi p(n);
    for(int i = 0;i<n;++i){
        cin>>p[i];
    }

    vi res = msort(p);

    for(int i = 0; i < n; ++i){
        cout << res[i] << " ";
    }


    return 0;
}
