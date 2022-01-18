#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int cnt=0,sum=0,add=0,mul=0;
    cin >> s;
    for(int i=0;i<s.size();i++){
        if(s[i] == '@'){
            cnt++;
        }
        if(s[i] >= 'a' && s[i] <= 'z'){
            sum++;
        }
        if(s[i] == '.' && s[i+1] >= 'a' && s[i+1]<= 'z'){
            add++;
        }
    }
    if(sum == s.size()-2){
        mul++;
    }
    if(cnt == 1){
        mul++;
    }
    if(add == 1){
        mul++;
    }
    if(mul == 3){
        cout << "YES";
    }
    else 
    cout << "NO";
}