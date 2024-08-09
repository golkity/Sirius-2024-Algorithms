#include "iostream"

using namespace std;

int factorial(int n){
    if(n == 0) return 1;

    int res = 1;
    int p_1 = 0;
    int p_2 = 0;

    for(int i = 1;i<=n;++i){
        int num = i;
        while(num%2==0){
            num/=2;
            p_1++;
        }
        while (num%5 == 0){
            num/=5;
            p_2++;
        }
        res = (res*num)%10;
    }

    int diff = p_1-p_2;
    for(int i = 0;i<diff;++i){
        res = (res*2)%10;
    }
    return res;
}

int main(){
    int n;
    cin>>n;

    cout<<factorial(n);
    return 0;
}
