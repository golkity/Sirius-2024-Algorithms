#include "iostream"
#include "vector"
#include "stack"
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> ar(n);
    for(int i = 0;i<n;++i){
        cin>>ar[i];
    }

    stack<int> st;
    int a = 1;

    for(int i =0;i<ar.size();++i){
        while(!st.empty() && st.top() == a){
            st.pop();
            ++a;
        }

        if(ar[i] == a){
            ++a;
        }else{
            st.push(ar[i]);
        }
    }

    while(!st.empty() && st.top() == a){
        st.pop();
        ++a;
    }

    if(a == n+1){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }


    return 0;
}
