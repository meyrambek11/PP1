#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    pair<string, int> m;
    int n;
    string s;
    for(int i = 0;i<2;i++ ){
        cin >> n;
        for(int j=0;j<n;j++){
            cin >> s;
            m[s]++; 
        }
    }
    map<string, int> :: iterator it;
    for(it = m.begin();it != m.end();it++){
        if(it->second > 1)
        cout << it->first << endl;
    }

}