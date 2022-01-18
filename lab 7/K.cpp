#include <iostream>
using namespace std;

int f(string s, int i, char a){
    if(i == s.size()) return a;
    a = max(a, s[i]);
    return f(s,i+1,a);
}
int main(){
    string s;
    cin >> s;
    cout << char(f(s,0,'0'));
}