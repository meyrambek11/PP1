#include <bits/stdc++.h>
using namespace std;
string s;

void f(int i){
    if(s[i] >= 'A' && s[i] <= 'Z'){
        cout << s[i];
        return;
    } 

    if(i == s.size()){
        cout << "-1";
        return;
    }
    f(i+1);
    
}
int main(){
    cin >> s;
    f(0);
}