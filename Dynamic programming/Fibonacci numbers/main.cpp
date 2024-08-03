#include "iostream"
#include "vector"

using namespace std;

vector<int> dp;

int F(int n){
    if(dp[n]!=-1) return dp[n];
    if(n<2) return n;
    return dp[n] = F(n-1) + F(n-2);
}

int main(){
    int n;
    cin>>n;
    dp.resize(n+1,-1);
    cout<<F(n);
    return 0;
}
