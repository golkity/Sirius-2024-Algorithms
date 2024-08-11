#include "iostream"
#include "vector"

using namespace std;

vector<int> factorisation(int n){
    vector<int> p;
    for(int d = 2;d*d<=n;++d){
        while(n%d==0){
            p.push_back(d);
            n/=d;
        }
    }
    if(n>1){
        p.push_back(n);
    }
    return p;
}



int main(){
    int n;
    cin>>n;
    vector<int> factors = factorisation(n);

    if(factors.empty()){
        cout<<n<<endl;
    }

    int current = factors[0];
    int count = 0;

    for(int i = 0;i<factors.size();++i){
        if(factors[i] == current){
            ++count;
        }else{
            if(count>1){
                cout<<current<<"^"<<count;
            }else{
                cout<<current;
            }
            cout<<"*";
            current = factors[i];
            count = 1;
        }
    }

    if(count>1){
        cout<<current<<"^"<<count;
    }else{
        cout<<current;
    }
    cout<<endl;

    return 0;
}
