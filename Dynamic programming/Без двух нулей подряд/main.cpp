#include "iostream"
#include "vector"

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<vector<int>> dp(n+1, vector<int>(k,0));

    for(int j = 0;j<k;++j){
        dp[1][j] = 1;
    }

    for(int i = 2;i <= n;++i){
        for(int j = 0;j<k;++j){
            if(j==0){
                for(int x = 1;x<k;++x){
                    dp[i][0] += dp[i-1][x];
                }
            }else{
                for(int x = 0;x<k;++x){
                    dp[i][j] += dp[i-1][x];
                }
            }
        }
    }

    long long result = 0;
    for(int j = 0;j<k;++j){
        result += dp[n][j];
    }

    cout<<result;

    return 0;

}
