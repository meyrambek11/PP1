#include <bits/stdc++.h>
using namespace std;

char f(char c){
    if(c >= 'A' && c <= 'Z') return char(c+32);
    return c;
}
int main(){
    /*freopen("input.txt", "r", stdin);
    freopen("output.txt", "w",stdout);*/
    map<char, int> m;

    string s;
    while(cin >> s){
        char c = f(s[0]);
        m[c]++;
    }
    for(int i=0;i<26;i++){
        cout << m[char(i + 'a')] << endl;
    }
    return 0;

}