#include "iostream"
#include "vector"

using namespace std;

int main(){
    vector<int> fP(5);
    vector<int> sP(5);

    for(int i = 0;i<fP.size();++i){
        cin>>fP[i];
    }
    for(int i = 0;i<sP.size();++i){
        cin>>sP[i];
    }

    int moves = 0;
    int max_move = 1000000;

    while (!fP.empty() && !sP.empty() && moves< max_move){
        int card1 = fP.front();
        int card2 = sP.front();

        fP.erase(fP.begin());
        sP.erase(sP.begin());

        bool first_win = (card1>card2 && !(card1 == 9 && card2 == 0)) || (card1 == 0 && card2 == 9);

        if(first_win){
            fP.push_back(card1);
            fP.push_back(card2);
        }else{
            sP.push_back(card1);
            sP.push_back(card2);
        }

        ++moves;
    }

    if(fP.empty()){
        cout<<"second"<<" "<<moves<<endl;
    }else if(sP.empty()){
        cout<<"first"<<" "<<moves<<endl;
    }else{
        cout<<"botva"<<endl;
    }

     return 0;
}
