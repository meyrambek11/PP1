#include <bits/stdc++.h>
using namespace std;

bool f(string s){
    string t = s;
    reverse(s.begin(),s.end());
    if(t == s) return true;
    return false;   
}

int main(){
    
    set<string> c;
    set<string> :: iterator it;
    string s;
    while(cin >> s){
        if(f(s) == false){
            c.insert(s);
        }
    }
    for(it = c.begin();it != c.end();it++){
        cout << (*it) << endl;
    }

}
    