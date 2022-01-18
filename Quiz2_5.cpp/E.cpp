#include <bits/stdc++.h>
using namespace std;
bool f(string s, int l,int r){
    if (l>=r) return true;
    if(s[l] == s[r]) return f(s,l+1,r-1);
    
    return false;
}
int main(){
    
    set<string> c;
    //vector<string> v;
    set<string> :: iterator it;
    
    string s;
    while(cin >> s){
        if(f(s,0,s.size()-1) == false){
            c.insert(s);
        }   
    }
    for(it = c.begin();it != c.end();it++){
        cout << (*it)<< endl;
    }
    return 0;
}