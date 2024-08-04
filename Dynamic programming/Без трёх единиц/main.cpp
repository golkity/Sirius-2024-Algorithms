#include "iostream"
#include "vector"

using namespace std;

int main(){
    int N;
    cin>>N;
    vector<vector<int>> dp(N+1, vector<int>(N,0));

    dp[1][0] = 1;
    dp[1][1] = 1;
    dp[1][2] = 0;

    for(int n = 2; n<=N;++n){
        dp[n][0] = dp[n-1][0] + dp[n-1][1] + dp[n-1][2];
        dp[n][1] = dp[n-1][0];
        dp[n][2] = dp[n-1][1];
    }
    long long result = dp[N][0] + dp[N][1] + dp[N][2];

    cout<<result;

    return 0;
}
