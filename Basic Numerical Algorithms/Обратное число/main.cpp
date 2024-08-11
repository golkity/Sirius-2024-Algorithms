#include "iostream"

using namespace std;

int gcd_ext(int a,int b,int&x, int&y){
    if(a==0){
        x = 0;
        y = 1;
        return b;
    }
    int x1,y1;
    int d = gcd_ext(b % a,a,x1,y1);
    x = y1 - (b/a) * x1;
    y = x1;
    return d;
}

int mod_inv(int a,int m){
    int x,y;
    int d = gcd_ext(a,m,x,y);
    if(d!=1) return -1;
    return (x % m + m) % m;
}

int main(){
    int m,a;
    cin>>m>>a;
    int result = mod_inv(a,m);
    cout<<result<<endl;
    return 0;
}
