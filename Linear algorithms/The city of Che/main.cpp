#include "iostream"
#include "vector"

using namespace std;

int main(){
    int n,r;
    cin>>n>>r;
    vector<int> a(n);
    for(int i =0;i<n;++i){
        cin>>a[i];
    }
    int left  = 0;
    int right = 0;
    long long count = 0;

    while(left<n){
        while(right<n && a[right] - a[left]<=r){
            ++right;
        }
        if(right<n){
            count+=(n-right);
        }
        ++left;
    }

    cout<<count<<endl;

    return 0;
}
