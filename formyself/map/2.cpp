#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int, int> m;
    map<int, int> :: iterator it;
    int n,x,cnt = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        m[x]++;
    }
    for(it = m.begin();it != m.end();it++){
        if((*it).second >= 2){
            cnt++;
        }
    }
    cout << cnt;
}