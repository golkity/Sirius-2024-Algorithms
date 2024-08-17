#include "iostream"
#include "vector"

using namespace std;

void bubble_sort(vector<int>&a, int &cnt){
    int n = a.size();
    while(n>1){
        for(int i = 0;i<n-1;++i){
            if(a[i]>a[i+1]){
                cnt++;
                swap(a[i],a[i+1]);
            }
        }
        --n;
    }
}

int main(){
    int n;
    int cnt =0;
    cin>>n;
    vector<int>a (n);
    for(int i =0;i<n;++i){
        cin>>a[i];
    }
    bubble_sort(a,cnt);
    cout<<cnt;

    return 0;
}
