#include "iostream"
#include "vector"
#include "climits"
using namespace std;

int main(){
    int n,m;
    cin>>n;
    vector<int> a(n);
    for(int i =0;i<n;++i){
        cin>>a[i];
    }
    cin>>m;
    vector<int> b(m);
    for(int j = 0;j<m;++j){
        cin>>b[j];
    }
    int i = 0;
    int j = 0;
    int min_diff = INT_MAX;
    pair<int, int> result;

    while(i<n && j<m){
        int acolor = a[i];
        int mcolor = b[j];
        int currenD = abs(acolor - mcolor);
        if(currenD< min_diff){
            min_diff = currenD;
            result = {acolor, mcolor};
        }

        if(acolor < mcolor){
            ++i;
        }else{
            ++j;
        }
    }

    cout<<result.first<<" "<<result.second<<endl;

    return 0;
}
