#include "iostream"

using namespace std;

int prime_f(int n){
    if(n%2==0) return 2;
    int i = 3;
    while(n%i!=0 and i*i<=n){
        i+=2;
    }
    if(i*i<=n) return i;
    return n;
}

int main(){
    int n;
    cin>>n;
    cout<<prime_f(n);

    return 0;
}
