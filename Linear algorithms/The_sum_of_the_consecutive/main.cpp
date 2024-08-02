#include "iostream"
#include "vector"

using namespace std;

int find_sum(int n,int k, int m, const vector<int>& a){
    vector<int> p(n+1);
    p[0] = 0;
    for(int i =0;i<n;++i){
        p[i+1] = p[i] +a[i];
    }
    for(int i = 0;i<=n-k-1;++i){
        int sum = p[i+k+1] - p[i];
        if(sum==m){
            return i+1;
        }
    }
    return 0;

}


int main(){
    int n, k, m;
    cin>>n>>k>>m;
    vector<int> a(n);
    for(int i =0;i<n;++i){
        cin>>a[i];
    }
    int result  = find_sum(n,k,m,a);
    cout<<result<<endl;


    return 0;
}
