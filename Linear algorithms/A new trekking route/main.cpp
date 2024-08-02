#include "iostream"
#include "vector"

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> h(n);
    for(int i =0;i<h.size();++i){
        cin>>h[i];
    }
    vector<int> a(n,0);
    for(int i = 1;i<n;++i){
        a[i] = a[i-1];
        if(h[i]>h[i-1]){
            a[i]++;
        }
    }

    for(int i =0;i<m;++i){
        int l,r;
        cin>>l>>r;
        l--;
        r--;
        int res = a[r] - a[l];
        cout<<res<<endl;
    }

    return 0;
}
