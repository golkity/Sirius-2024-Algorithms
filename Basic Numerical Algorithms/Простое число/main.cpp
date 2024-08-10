#include "iostream"
#include "vector"
#include "cmath"
using namespace std;

int find_k_p(int k){
    int upper_k;
    if(k<6){
        upper_k = 15;
    }else{
        upper_k = k*log(k) + k * log(log(k));
    }
    vector<bool> is_prime(upper_k+1,true);
    is_prime[0] = is_prime[1] = false;

    for(int i = 2;i*i<=upper_k;++i){
        if(is_prime[i]){
            for(int j = i*i;j<=upper_k;j+=i){
                is_prime[j] = false;
            }
        }
    }

    int count = 0;
    for(int i = 2;i<=upper_k;++i){
        if(is_prime[i]){
            count++;
            if(count == k){
                return i;
            }
        }
    }
    return -1;
}

int main(){
    int k;
    cin>>k;
    cout<<find_k_p(k)<<endl;
    return 0;
}
