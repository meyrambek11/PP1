#include <iostream>
#include <algorithm>
using namespace std;
string s;
bool rec(int a, int b){
    if(a>=b) return true;
    if(s[a] == s[b]) return rec(a+1,b-1);
    return false;
}
int main(){
    cin >> s;
    if( rec(0, s.size()-1) ==true){
        cout << "Yes";
    } 
    else
    cout << "No";
}
