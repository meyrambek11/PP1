#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<string,string> > v;
    string s,k;
    for(int i=0;i<5;i++){
        cin >> s >> k;
        v.push_back(make_pair(s,k));
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<5;i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}