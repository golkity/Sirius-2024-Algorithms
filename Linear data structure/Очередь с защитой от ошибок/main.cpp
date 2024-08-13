#include "iostream"
#include "queue"
#include "string"

using namespace std;


int main(){
    queue<int> s;
    string a;

    while(true){
        cin>>a;
        if(a == "push"){
            int num;
            cin>>num;
            s.push(num);
            cout<<"ok"<<endl;
        }
        else if(a == "pop"){
            cout<<s.front()<<endl;
            s.pop();
        }
        else if(a == "front"){
            cout<<s.front()<<endl;
        }
        else if(a == "size"){
            cout<<s.size()<<endl;
        }
        else if(a == "clear"){
            queue<int> em;
            swap(s, em);
            cout<<"ok"<<endl;
        }
        else if(a == "exit"){
            cout<<"bye"<<endl;
            break;
        }
    }

    return 0;
}
