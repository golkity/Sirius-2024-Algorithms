#include "iostream"

using namespace std;

int gcd(int a,int b){
    if (a==0&&b==0) return 0;
    a = abs(a);
    b = abs(b);
    if (a==b) return a;
    while(b>0){
        a%=b;
        swap(a,b);
    }
    return a;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<a/gcd(a,b)<<" "<<b/gcd(a,b);



    return 0;
}
