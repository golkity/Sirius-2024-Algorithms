#include "iostream"
#include "vector"

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> z(n);
    for(int i =0;i<n;++i){
        cin>>z[i];
    }
    vector<long long> p(n+1);
    p[0] = 0;
    for(int i = 1;i <= n; ++i){
        p[i] = p[i-1] + z[i-1];
    }
    vector<int> index(3,-2);
    index[0] = 0;

    int ibest   = -1;
    int jbest   = -1;
    int max_len =  0;

    for(int i = 1 ;i<=n;++i){
        int rem = (p[i]%3+3)%3;
        if(index[rem]!=-2){
            int strat_i = index[rem];
            int lenght = i - strat_i;
            if(lenght> max_len){
                max_len = lenght;
                ibest = i;
                jbest = strat_i + 1;
            }
        }else{
            index[rem] = i;
        }
    }

    if(jbest == -1){
        cout<<-1;
    }else{
        cout<<jbest<<" "<<ibest;
    }


    return 0;
}
