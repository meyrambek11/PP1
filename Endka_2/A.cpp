#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int cnt = 0;
    string t = "abba";
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(t == s.substr(i,4)){
            cnt++;
        }
    }
    cout << cnt;
}