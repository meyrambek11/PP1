#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    deque<int> q;
    int x;
    char c;
    while(true){
        cin >> c;
        if(c == '+'){
            cin >> x;
            q.push_front(x);
        }
        if(c == '-'){
            cin >> x;
            q.push_back(x);
        }
        if(c == '*'){
            if(q.empty()){
                cout << "error" << endl;
            }
            else{
                cout << q.front() + q.back() << endl;
                if(q.size() > 1){
                    q.pop_front();
                    q.pop_back(); 
                }
                else if(q.size() == 1){
                    q.pop_front();
                }
            } 
        }
        if(c == '!')break;
    }

}