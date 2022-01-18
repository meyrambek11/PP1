#include <bits/stdc++.h>
using namespace std;
int main(){
    
    //freopen("output.txt", "w", stdout);
    int n;
    cin >> n;
    map<string, string> m;
    string a,b;
    for(int i = 0;i<n;i++){
        cin >> a >> b;
        m[b] = a;
    }
    int k;
    cin >> k;
    for(int i = 0;i<k;i++){
        cin >> b;
        cout << m[b] << endl;
    }
    /*map<string, string> :: iterator it;
    for(int i=0;i<k;i++){
        for(it = m.begin();it != m.end();it++){
            pair<string, string> p = *it;
            if(d[i] == p.second){
                cout << p.first << endl;
            }
        }
    }*/

    return 0;
}