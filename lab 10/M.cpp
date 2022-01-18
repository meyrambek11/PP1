#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    map<string, double> m;
    string s;
    int n,sum=0;
    int x,y;
    cin >> n;
for(int i=0;i<n;i++){
        cin >> x;
        for(int j=0;j<x;j++){
            cin >> s >> y;
            pair<string,double> p = make_pair(s,y);
            sum += p.second;
            m[p.first] += y;
            m.insert(p);
            
        }

    }
    //cout << sum << endl;
    map<string,double> :: iterator it;
    for(it = m.begin();it != m.end();it++){
        cout << it->first << " " << (it->second*100)/sum << endl;
    }
    
}