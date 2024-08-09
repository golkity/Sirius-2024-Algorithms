#include "iostream"

#define ll long long
using namespace std;

int gcd_ext(ll a, ll b, ll&x, ll&y){
    if (b == 0){
        x = 1;
        y = 0;
        return a;
    }

    ll d = gcd_ext(b,a%b, x ,y);
    x-= (a/b) * y;
    swap(x,y);
    return d;
}


int main(){
    ll a,b,c;
    cin>>a>>b>>c;
    ll x,y;
    ll g = gcd_ext(a,b,x,y);
    if(c%g!=0){
        cout<<-1;
    }else{
        x *= c/g;
        y *= c/g;

        ll b_g = b/g;
        x = (x % b_g + b_g) % b_g;
        y = (c - a * x) / b;
        cout<<x<<" "<<y;
    }


    return 0;
}
