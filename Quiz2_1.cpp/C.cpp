#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<char> q;
    string s;
    int cnt = 0;
    cin >> s;
    for(int i = 0;i<s.size();i++){
        char c = s[i];
        q.push(c);
    }
    while(!q.empty()){
        char x = q.front();
        if(x >= 'A' && x <= 'Z'){
            cout << x;
            while(!q.empty()){
                q.pop();
            }
        }
        else
         cnt++;
        q.pop();
    }
    if(cnt != 0){
        cout << "-1";
    }
}