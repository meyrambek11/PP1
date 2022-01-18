#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    set<string> s;
    set<string> :: iterator it;
    string c,b,t;
    cin >> b;
    while(cin >> c){
        t = c;
        sort(t.begin(),t.end());
        if(t != b){
        s.insert(c);
        }
    }
    for(it = s.begin();it !=s.end();it++){
        cout << (*it) << endl;
    }
    

}