#include "iostream"

using namespace std;

int phi(int n){
    int res = n;
    for(int p = 2;p*p<=n;++p){
        if(n%p==0)
            res-=res/p;
        while(n%p==0)
            n/=p;
    }
    if(n>1)
        res-=res/n;
    return res;
}

int main(){
    int n;
    cin>>n;
    cout<<phi(n);
    return 0;
}
