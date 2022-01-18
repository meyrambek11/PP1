#include <bits/stdc++.h>
using namespace std;
int main(){
    string s,c;
    int cnt=0,k;
    cin >> s >> c;
    for(int i=0;i<c.size();i++){
        if(s == c.substr(i,s.size())){
            cnt++;
        }
    }
    if(c.size()%s.size() == 0){
        k = c.size()/s.size();
    }
    if(cnt == k){
        cout << "YES";
    }
    else
    cout << "NO";
}