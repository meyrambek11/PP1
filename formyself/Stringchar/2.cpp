#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,v;
    int cnt = 0;
    cin >> s >> v;
    for(int i=0;i<s.size();i++){
        if(v == s.substr(i,v.size())){
            cnt++;
        }
    }
    if(cnt == 1){
        cout << "YES";
    }
    else
    cout << "NO";
}