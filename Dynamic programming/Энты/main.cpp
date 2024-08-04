#include "iostream"
#include "vector"
using namespace std;

int main(){
    int k;
    long long p;
    cin>>k>>p;
    vector<long long> dp(k+1,0);
    if(k>=2){
        dp[2] = 1;
    }

    for(int i = 2;i<k;++i){
        if(dp[i]!=0){
            if(i+1 <=k){
                dp[i+1] = (dp[i+1] + dp[i])%p;
            }
            if(2*i<=k){
                dp[2*i] = (dp[2*i]+ dp[i])%p;
            }
        }
    }

    cout<<dp[k];

    return 0;
}
