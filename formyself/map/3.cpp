#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    map<string, int> m;
    map<string, int> :: iterator it;
    string x;
    int n,cnt = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        m[x]++;
    }
    for(it = m.begin();it != m.end();it++){
        if((*it).second == 3){
            cnt++;
        }
    }
    cout << cnt;
}