#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    set<pair<int, int> > s;
    set<pair <int, int> > :: iterator it;
    int x,y;
    int n,cnt = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x >> y;
        s.insert(make_pair(x,y));
    }
    for(it = s.begin();it != s.end();it++){
        pair<int, int> p = *it;
        if(p.first == p.second){
            cnt++;
        }
    }
    cout << cnt;
    
}