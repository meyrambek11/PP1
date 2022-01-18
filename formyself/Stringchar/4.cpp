#include <bits/stdc++.h>
using namespace std;
int main(){
    map<char, int> m;
    set<int> c;
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        m[s[i]]++;
    }
    map<char, int> :: iterator it;
    for(it = m.begin();it != m.end();it++){
        c.insert(it->second);
    }
    if(c.size() == 1){
        cout << "YES";
    }
    else
    cout << "NO";
}