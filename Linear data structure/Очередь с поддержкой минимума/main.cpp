#include "iostream"
#include "vector"
#include "algorithm"

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> stack;
    vector<string> res;
    int count = 0;

    for(int i =0;i<n;++i){
        int num;
        cin>>num;

        if(num>0){
            stack.push_back(num);
        }else if(num == 0 && stack.size()!=count){
            res.push_back(to_string(*min_element(stack.begin() + count ,stack.end())));
            count++;
        }else if(num == 0 && stack.size() == count){
            res.push_back("-1");
        }
    }

    for(auto i : res){
        cout<<i<<endl;
    }

    return 0;
}
