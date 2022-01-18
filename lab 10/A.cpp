#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> v;
    vector<int> q;
    string s;
    int n,m;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> s >> m;
        v.push_back(s);
        q.push_back(m);
    }
    sort(v.begin(),v.end());
    sort(q.begin(),q.end());
    for(int i=0;i<n;i++){
        cout << v[i] << " " << q[i] << endl;
    }
}