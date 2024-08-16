#include "iostream"
#include "deque"
#include "string"

using namespace std;

int main(){
    string line;
    deque<int> S;

    while(true){
        cin>>line;

        if(line == "size"){
            cout<<S.size()<<endl;
        }
        else if(line == "push_back"){
            int num;
            cin>>num;
            S.push_back(num);
            cout<<"ok"<<endl;
        }
        else if(line == "push_front"){
            int num;
            cin>>num;
            S.push_front(num);
            cout<<"ok"<<endl;
        }
        else if(line == "clear"){
            S.clear();
            cout<<"ok"<<endl;
        }


        else if(line == "exit"){
            cout<<"bye";
            break;
        }
        else if(S.size()>0){
            if(line == "front"){
                cout<<S.front()<<endl;
            }else if(line == "back"){
                cout<<S.back()<<endl;
            }else if(line == "pop_back"){
                cout<<S.back()<<endl;
                S.pop_back();
            }else if(line == "pop_front"){
                cout<<S.front()<<endl;
                S.pop_front();
            }
        } else{
            if(line == "front"){
                cout<<"error"<<endl;
            }else if(line == "back"){
                cout<<"error"<<endl;
            }else if(line == "pop_back"){
                cout<<"error"<<endl;
            }else if(line == "pop_front"){
                cout<<"error"<<endl;
            }
        }
    }

    return 0;
}
