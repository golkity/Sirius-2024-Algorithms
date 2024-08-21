#include "bits-stdc++.h"

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    unordered_map<string, set<string >> slovarik;
    for(int i = 0;i<n;++i){
        string word;
        cin>>word;
        string base_w = word;
        transform(base_w.begin(), base_w.end(), base_w.begin(), ::tolower);

        slovarik[base_w].insert(word);
    }
    int errors = 0;
    string s;
    cin.ignore();
    getline(cin,s);
    vector<string> words;
    string word;
    for(int i = 0;i<s.length();++i){
        if(s[i] == ' '){
            if(!word.empty()){
                words.push_back(word);
                word.clear();
            }
        }else{
            word+=s[i];
        }
    }
    if(!word.empty()){
        words.push_back(word);
    }
    for(auto& word:words){
        string b_s = word;
        transform(b_s.begin(),b_s.end(),b_s.begin(),::tolower);
        int up_c = count_if(word.begin(),word.end(),::isupper);
        if((slovarik.count(b_s) && slovarik[b_s].find(word) == slovarik[b_s].end()) || up_c != 1){
            ++errors;
        }
    }

    cout<<errors<<endl;

    return 0;
}
