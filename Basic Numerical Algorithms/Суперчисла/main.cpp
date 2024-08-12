#include "iostream"
#include "set"
#include "vector"
#include "algorithm"

using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    vector<int> p (b+1);
    for(int x = 0;x<=b;++x){
        p[x] = x;
    }
    p[1] = 0;
    vector<int> prime_l;

    int i = 2;
    while(i<=b){
        if(p[i]!=0){
            prime_l.push_back(p[i]);
            for(int j = i;j<=b;j+=i){
                p[j] = 0;
            }
        }
        i+=1;
    }

    set<int>pr;
    for(int i = 0;i<prime_l.size();++i){
        for(int x = 0;x<prime_l.size();++x){
            int g = prime_l[i] + prime_l[x];
            if(g<=b && g>=a){
                pr.insert(g);
            }
        }
    }

    vector<int> result(pr.begin(), pr.end());
    sort(result.begin(), result.end());

    for(auto s : result){
        cout<<s<<endl;
    }

    return 0;
}
