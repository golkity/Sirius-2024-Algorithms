#include "iostream"
#include "cmath"

using namespace std;

int main(){
    long long n;
    cin>>n;

    int sigma_0 = 0;
    long long sigma_1 = 0;

    for(long long i = 1;i<= sqrt(n);++i){
        if(n%i == 0){
            sigma_0+=2;
            sigma_1+=i + n/i;
            if(i==n/i){
                sigma_0--;
                sigma_1-=i;
            }
        }
    }

    cout<<sigma_0<<" "<<sigma_1<<endl;

    return 0;
}
