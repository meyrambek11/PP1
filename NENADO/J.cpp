#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string, int> m;
    string s;
    int n,x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s >> x;
        m[s] += x;
    }
    map<string, int > :: iterator it;
    for(it = m.begin();it != m.end();it++){
        cout << it->first << " " << it->second << endl;
    }
}