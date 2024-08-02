#include "iostream"
#include "vector"

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i = 0;i<n;++i){
        cin>>a[i];
    }
    int imin  = 0;
    int jbest = 0;
    int ibest = 0;

    for(int i = 2;i<n;++i){
        if(a[i-1]< a[imin])
            imin = i-1;
        if (a[i] * a[ibest]  > a[jbest] * a[imin])
        {
            ibest = imin;
            jbest = i;
        }
    }
    if (a[jbest] == a[ibest] || a[ibest] == 0 || a[jbest] == 0)
    {
        cout << "0 0";
    }
    else
    {
        cout << ibest + 1 << " " << jbest + 1 << endl;
    }

    return 0;
}
