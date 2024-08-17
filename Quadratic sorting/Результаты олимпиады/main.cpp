#include "iostream"
#include "vector"

using namespace std;

void insertion_sort(vector<int> &a, vector<int> &b){
    int n = a.size();

    for(int i = 0;i<n;++i){
        int k_i = a[i];
        int k_b = b[i];
        int j = i-1;

        while(j>=0 && (b[j]<k_b || (b[j] == k_b && a[j]> k_i))){
            a[j+1] = a[j];
            b[j+1] = b[j];
            j--;
        }
        a[j+1] = k_i;
        b[j+1] = k_b;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    vector<int> b(n);

    for(int i = 0;i<n;++i){
        cin>>a[i]>>b[i];
    }

    insertion_sort(a,b);

    for(int i = 0;i<n;++i){
        cout<<a[i]<<" "<<b[i]<<endl;
    }

    return 0;
}
