#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    map<char, int> m;
    string s;
    for(int i=0;i<3;i++){
        cin >> s;
        for(int j=0;j<s.size();j++){
            m[s[j]]++;
        }
    }
    for(char c = 'a'; c <= 'z';c++){
        if(m[c] == 0 ){
            cout << c;
        }
    }
}