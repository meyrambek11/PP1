#include <iostream>
#include <queue>
using namespace std;
int main(){
     queue<char> q;
    string s;
    cin >> s;
    for(int i = 0;i<s.size();i++){
        char a = s[i];
        q.push(a);
    }
    while(!q.empty()){
        char n = q.front();
        q.pop();
        if(n == '1' && n == q.front()){
            q.pop();
        }
        else
        cout << n;
    }
    return 0;
}