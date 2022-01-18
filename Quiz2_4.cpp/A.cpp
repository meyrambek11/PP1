#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> m;
    map<string, int> :: iterator it;
    int n, x,cnt = 0;
    string s;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> s >> x;
        m[s]++;
    }
    
    for(it = m.begin();it != m.end();it++){
        if((*it).second > 1){
            cout << (*it).first << endl;
        }
        else
        cnt++;
        }
    
    if(cnt == n){
        cout << "NO";
    }
    


}