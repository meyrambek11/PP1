#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    vector<pair<int, int> > v;
    vector<pair<int, int> > q;
    map<int,int> m;
    map<int, int> :: iterator it;
    int x,y,x1,y1;
    int n,cnt = 0;
    for(int i = 0;i<n;i++){
        cin >> x >> y >> x1 >> y1;
        v.push_back(make_pair(x,x1));
        q.push_back(make_pair(y,y1));
    }
    for(int i = 0;i<n;i++){
        pair<int, int> p = v[i];
        pair<int, int> d = q[i];
        int a = (p.second - p.first);
        int b = (d.second - d.first);
        int k = (a*a + b*b);
        m[k]++;
    }
    for(it = m.begin();it != m.end();it++){
        if((*it).second == 1){
            cnt++;
        }
    }
    cout << cnt+1;
}