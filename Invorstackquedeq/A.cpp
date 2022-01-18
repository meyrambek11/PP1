#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    int n;
    string c;
    while(true){
        cin >> c;
        if(c == "push"){
            cin >> n;
            s.push(n);
            cout << "ok" << endl;
        }
        if(c == "pop"){
            cout << s.top() << endl;
            s.pop();
        }
        if(c == "back"){
            cout << s.top() << endl;
        }
        if(c == "size"){
            cout << s.size() << endl;
        }
        if(c == "clear"){
            while(s.empty()){
                s.pop();
            }
            cout << "ok" << endl;

        }
        if(c == "exit")break;   
    }
    cout << "buy" << endl;
}