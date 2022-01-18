#include <bits/stdc++.h>
using namespace std;
int main(){
    map<char, int> m;
    map<char, int> :: iterator it;
    string s;
    char c;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s >> c;
        m[c]++;
    }
    for(char k = 'A';k<= 'C';k++){
        m[k]++;
    }
    for(it = m.begin();it != m.end();it++){
        cout << it->first << " " << it->second-1 << endl;
    }
}