#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int cnt = 1;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i] - s[i-1] == 1){
            cnt++;
        }
    }
    cout << cnt;

}