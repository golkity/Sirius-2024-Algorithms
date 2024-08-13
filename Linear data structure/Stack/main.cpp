#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main() {
    stack<int> s;
    string command;

    while (true) {
        std::cin >> command;

        if (command == "push") {
            int value;
            cin >> value;
            s.push(value);
            cout << "ok" << endl;
        } else if (command == "pop") {
            if (s.empty()) {
                cout << "error" << endl;
            } else {
                cout << s.top() << endl;
                s.pop();
            }
        } else if (command == "back") {
            if (s.empty()) {
                cout << "error" << endl;
            } else {
                cout << s.top() << endl;
            }
        } else if (command == "size") {
            cout << s.size() << endl;
        } else if (command == "clear") {
            while (!s.empty()) {
                s.pop();
            }
            cout << "ok" << endl;
        } else if (command == "exit") {
            cout << "bye" << endl;
            break;
        }
    }

    return 0;
}
