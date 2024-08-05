#include "iostream"
#include "cmath"

using namespace std;

#define ll long long

ll f(ll n,ll d){

    return min((n % d),d-(n%d));

}

int main(){
    ll a,b,c;
    cin>>a>>b>>c;

    ll d = floor((a+b)/2.0);

    if((a+b)%2){
        ll firs = f(abs(d),c);
        ll second = f(abs(d+1),c);

        if(firs<second){
            cout<<d<<" "<<firs<<endl;
        }else{
            cout<<d+1<<" "<<second<<endl;
        }
    }else{
        cout<<d<<" "<<f(abs(d),c)<<endl;
    }


    return 0;
}
