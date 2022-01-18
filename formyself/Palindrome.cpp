#include <iostream>
using namespace std;
string s;
bool f(int l,int r){
    if (l>=r) return true;
    if(s[l] == s[r]) return f(l+1,r-1);
    
    return false;
}
int main(){
    cin >> s;
    if(f(0,s.size()-1) == true){
        cout << "YES";
    }
    else
    cout << "NO";
}
