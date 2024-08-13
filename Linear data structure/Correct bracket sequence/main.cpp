#include "iostream"
#include "vector"
#include "string"

using namespace std;

bool CheckT(string& s){
    vector<char> stk;
    char OpenB[256] = {0};
    OpenB[')'] = '(';
    OpenB[']'] = '[';
    OpenB['}'] = '{';

    for(char ch : s){
        if(ch == '(' || ch == '[' || ch == '{'){
            stk.push_back(ch);
        }else if(ch == ')' || ch == ']' || ch == '}'){
            if(stk.empty() || stk.back() != OpenB[ch]){
                return false;
            }
            stk.pop_back();
        }
    }
    return stk.empty();
}

int main(){
    string s;
    cin>>s;

    if(CheckT(s)){
        cout<<"yes"<<endl;
    }else{
        cout<<"no"<<endl;
    }
    return 0;
}
