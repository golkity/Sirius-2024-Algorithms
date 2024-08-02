#include "iostream"
#include "vector"

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i =0;i<a.size();++i){
        cin>>a[i];
    }
    int imax =0;
    int jbest = k+1;
    int ibest = 0;
    for(int i = k+1;i<n;++i){
        if(a[i-k-1]>a[imax]){
            imax = i-k-1;
        }
        if (a[imax] + a[i]>a[ibest]+a[jbest]){
            ibest = imax;
            jbest = i;
        }
    }
    cout<<ibest+1<<" "<<jbest+1;

    return 0;
}
