#include "iostream"
#include "vector"
#include "cmath"
using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int temp = b;
        b = a%b;
        a = temp;
    }
    return a;
}

vector<int> find_dev(int n){
    vector<int> p;
    for(int i = 1;i<= sqrt(n);++i){
        if(n%i==0){
            p.push_back(i);
            if(i!=n/i){
                p.push_back(n/i);
            }
        }
    }
    return p;
}

int main(){
    int n;
    cin>>n;

    vector<int> div = find_dev(n);
    int count = 0;

    for(int i = 0;i<div.size();++i){
        for(int j = i+1;j<div.size();++j){
            int a = div[i];
            int b = div[j];
            if(a<b && gcd(a,b) == 1 && a*b<=n){
                ++count;
            }
        }
    }

    cout<<count<<endl;

    return 0;
}
