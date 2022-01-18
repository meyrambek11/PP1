#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    map<string, int> m;
    string s;
    while(cin>>s){
        m[s]++;
    }
    map<string, int> :: iterator it;
    for(it = m.begin();it != m.end();it++){
        if(it->second > 1){
            cout << it->first << endl;
        } 
    }
}