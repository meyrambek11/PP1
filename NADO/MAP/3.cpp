#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string, string> m;
    map<string, string> :: iterator it;
    pair<string,string> p;
    string s,c;
    string t,r;
    int n,x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s >> c;
        m[s] = c;
    }
    cin >> x;
    for(int i=0;i<x;i++){
        cin >> t >> r;
            if(!m.count(t)){
                cout << "login error" << endl;
            }
            else if(m[t] != r){
                cout << "password error" << endl;
            }  
            else{
                cout << "correct password" << endl;
            }   
    }
    return 0;
}