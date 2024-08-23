#include "bits-stdc++.h"

using namespace std;

double binar_f(double a,int n){
    double left = 0;
    double right = max(1.0,a);
    double m;
    while(right-left>1e-7){
        m = (right+left)/2;
        if(pow(m,n)<a){
            left = m;
        }else{
            right = m;
        }
    }
    return m;
}

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    double a;
    int n;
    cin>>a>>n;

    double res = binar_f(a,n);


    cout<<fixed<<setprecision(6)<<res;


    return 0;
}
