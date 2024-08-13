#include "string"
#include "iostream"
#include "vector"
#include "cctype"
#include "sstream"

using namespace std;

int calculate(int a, int b, char op){
    if (op == '+') return a+b;
    if (op == '-') return a-b;
    if (op == '*') return a*b;
}

int evPost(string& s){
    vector<int> stack;
    istringstream iss(s);
    string token;

    while(iss>>token){
        if(isdigit(token[0])){
            stack.push_back(stoi(token));
        }else{
            int b = stack.back(); stack.pop_back();
            int a = stack.back(); stack.pop_back();
            int result = calculate(a,b, token[0]);
            stack.push_back(result);
        }
    }
    return stack.back();
}

int main(){
    string input;
    getline(cin,input);

    input.erase(input.find_last_not_of(" \n\r\t")+1);

    cout<<evPost(input)<<endl;

    return 0;
}
