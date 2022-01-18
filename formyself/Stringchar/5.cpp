#include <bits/stdc++.h>
using namespace std;
int main(){
    map<char,int> m;
    string s;
    char c;
    int n,cnt = 0;
    cin >> s >> c >> n;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    map<char,int> :: iterator it;
    for(it = m.begin();it != m.end();it++){
        if(it->first == c && it->second == n){
            cnt++;
        }
    }
    if(cnt != 0){
        cout << "YES";
    }
    else 
    cout << "NO";

    
}