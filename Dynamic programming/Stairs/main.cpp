#include "iostream"
#include "vector"

using namespace std;

vector<int> dp;


int main(){
    int n;
    cin>>n;
    vector<int> st(n+1);
    for(int i =1;i<=n;++i){
        cin>>st[i];
    }
    dp.resize(n+1,0);
    dp[0] = 0;
    if(n>=1){
        dp[1] = st[1];
    }

    for(int i =2;i<=n;++i){
        dp[i] = max(dp[i-1] + st[i], dp[i-2] + st[i]);
    }
    cout<<dp[n]<<endl;



    return 0;
}
