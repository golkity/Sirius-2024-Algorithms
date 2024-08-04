#include "iostream"
#include "vector"

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n),b(n),c(n);
    for(int i = 0;i<n;++i){
        cin>>a[i]>>b[i]>>c[i];
    }

    vector<int> dp(n+1, 3600*n);
    dp[0] = 0;
    for(int i =0;i<n;++i){
        if(i+1<=n){
            dp[i+1] = min(dp[i+1], dp[i]+ a[i]);
        }
        if(i+2<=n){
            dp[i+2] = min(dp[i+2], dp[i]+b[i]);
        }
        if(i+3<=n){
            dp[i+3] = min(dp[i+3], dp[i]+c[i]);
        }
    }

    cout<<dp[n];

    return 0;
}
