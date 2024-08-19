#include "bits/stdc++.h"

using namespace std;
typedef vector<int> vi;

int main(){
   ios::sync_with_stdio(0);
   cin.tie(0);

   int L,m,n;
   cin>>L>>n>>m;

   vi a(L+2,0);
   for(int i = 0;i<n;++i){
       int l,r;
       cin>>l>>r;
       a[l]+=1;
       a[r+1]-=1;
   }

   for(int i = 1;i<=L;++i){
       a[i]+=a[i-1];
   }

   for(int i = 0;i<m;++i){
       int p;
       cin>>p;
       cout<<a[p]<<endl;
   }
   return 0;
}
