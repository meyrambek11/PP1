#include <bits/stdc++.h>
using namespace std;
int main(){
    set<pair<int, int> > s;
    set<pair<int, int> > :: iterator it;
    int a,b,cnt = 0;
    cin >> a >> b;
    int n,x,y;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x >> y;
        s.insert(make_pair(x,y));
    }
    for(it = s.begin();it != s.end();it++){
        if(it->first < a && it->second < b){
            cnt++;
        }
    }
    cout << (a*b) - cnt << endl;
}