#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    map<string, int> m;
    map<string, int> :: iterator it;
    int n,x;
    string s;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s >> x;
        m[s] += x;
        
    }
    for(it = m.begin();it != m.end();it++){
        cout << it->first << " " << it->second << endl;
    }

}