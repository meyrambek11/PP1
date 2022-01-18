#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<char> q;
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        q.push(s[i]);
    }
    while(!q.empty()){
        char k = q.front();
        q.pop();
        if(k == '1' && k == q.front()){
            q.pop();
        }
        else{
            cout << k;
        }
    }
}