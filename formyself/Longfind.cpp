#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, int> m;
    map<string, int> :: iterator it;
    int n,mx = 0,mn = 1e+6,longer = 0,shorter = 0;
    string s;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s;
        m[s]++;
        int x = s.size();
        mx = max(mx,x);
        mn = min(mn,x);
    }
    for(it = m.begin();it != m.end();it++){
        if((*it).first.size() == mx){
            longer = max(longer,(*it).second);   
        }
        if((*it).first.size() == mn){
            shorter = max(shorter,(*it).second);
        }
    }
    if(shorter>=longer){
        cout << "My type!";
    }
    else
    cout << "Not my type";
    return 0;
}