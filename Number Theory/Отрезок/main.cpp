#include "iostream"
#include "cmath"

using namespace std;

int gcd(int a, int b){
    while(b>0){
        a%=b;
        swap(a,b);
    }
    return abs(a);
}

int count(int a,int b, int c, int d){
    int dx = abs(c-a);
    int dy = abs(d-b);

    return dx + dy - gcd(dx,dy);
}

int main(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    cout<<count(a,b,c,d);
    return 0;
}
