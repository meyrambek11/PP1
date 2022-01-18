#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    map<char, int> m;
    map<char, int>  :: iterator it; 
    char a;
    int n;
    while(cin >> a >> n){
        if(m[a] < n){
            m[a] = n;
        }
    }
    for(it = m.begin();it != m.end();it++){
        cout << it->first << " " << it->second << endl;
    }
}