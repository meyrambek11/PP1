#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    map<string, int> m;
    int n;
    cin >> n;
    string s;
    for(int i = 0;i<n;i++){
        cin >> s;
        m[s]++;
    }
    map<string, int> :: iterator it;
    for(it = m.begin(); it != m.end();it++){
      cout << it->first << " " << it->second << endl;
    }
}
