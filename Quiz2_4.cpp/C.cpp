#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<char> v;
    string s;
    int cnt = 0;
    cin >> s;
    for(int i = 0;i<s.size();i++){
        if(s[i] >= '1' && s[i] <= '9'){
            v.push_back(s[i]);
        }
    }
    for(int i=0;i<v.size();i++){
        cnt = cnt + v[i] - 48;
    }
    cout << cnt;
}