#include <iostream>
#include <queue>
using namespace std;
int main(){
    queue<int> q;
    int n;
    string s;
    while(true){
        cin >> s;
        if(s == "push"){
            cin >> n;
            q.push(n);
            cout << "ok" << endl;
        }
        if(s == "pop"){
            cout << q.front() << endl;
            q.pop();
        }
        if(s == "front"){
            cout << q.front() << endl;
        }
        if(s == "size"){
            cout << q.size() << endl;
        }
        if(s == "clear"){
            while(q.empty()){
                q.pop();
            }
            cout << "ok" << endl;
        }
        if(s == "exit")break;
    }
    cout << "bye" << endl;
}