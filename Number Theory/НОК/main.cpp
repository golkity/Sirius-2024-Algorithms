#include "iostream"
#include "vector"

using namespace std;

int gcd(int a,int b){
    while(b>0){
        a%=b;
        swap(a,b);
    }
    return a;
}

int lcm(int a,int b){
    return(a/gcd(a,b)) *b;
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<lcm(a,b);
    
    return 0;
}
