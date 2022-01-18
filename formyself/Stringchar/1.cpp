#include <bits/stdc++.h>
using namespace std;

char f(char k){
    for(char c ='a';c<= 'z';c++){
        if(k == c){
            return k-32;
        }
    }
    return k;
}
int main(){
    string s;
    cin >> s;
    for(int i=0;i<s.size();i++){
        cout << f(s[i]);
    }
}