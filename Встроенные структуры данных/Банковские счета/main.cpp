#include "bits/stdc++.h"

using namespace std;

int main(){
    ios::sync_with_stdio();
    cin.tie();

    int n;
    string s;
    map<string,int> bank;
    cin>>n;
    for(int i = 0;i<n;++i){
        cin>>s;
        if(s == "DEPOSIT"){
            string name;
            int num;
            cin>>name>>num;
            bank[name]+=num;
        }else if(s == "WITHDRAW"){
            string name;
            int sum;
            cin>>name>>sum;
            bank[name]-=sum;
        }else if(s == "BALANCE"){
            string name;
            cin>>name;
            if(bank.find(name) != bank.end()){
                cout<<bank[name]<<endl;
            }else{
                cout<<"ERROR"<<endl;
            }
        }else if(s == "TRANSFER"){
            string name1,name2;
            int sum;
            cin>>name1>>name2>>sum;
            bank[name1]-=sum;
            bank[name2]+=sum;
        }else if(s == "INCOME"){
            int num;
            cin>>num;
            for(auto& elem : bank){
                if(elem.second>0){
                    elem.second+=(elem.second*num)/100;
                }
            }
        }
    }

    return 0;
}
