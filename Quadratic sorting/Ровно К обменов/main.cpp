#include "iostream"
#include "vector"

using namespace std;

vector<int> k_swaps(int n, int k){
    vector<int> a;
    while(n>0){
        if(k>n-1){
            a.push_back(n);
            k-=(n-1);
            --n;
        }else{
            for(int i = 1;i<n-k;++i){
                a.push_back(i);
            }
            a.push_back(n);
            for(int i = n-k;i<n;++i){
                a.push_back(i);
            }
            k = 0;
            n = 0;
        }
    }
    return a;
}

int main(){
    int n,k;
    cin>>n>>k;

    vector<int> res = k_swaps(n,k);

    for(int i = 0;i<res.size();++i){
        cout<<res[i]<<" ";
    }

    return 0;
}
