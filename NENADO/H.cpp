#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string, int> m;
    int n;
    string s;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        m.insert(make_pair(s,i+1));
    }
    map<string, int> :: iterator it;
    for(it = m.begin();it != m.end();it++){
        cout << it->first << " " << it->second << endl;
    }
}