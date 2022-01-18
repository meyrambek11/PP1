#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    vector<pair<int, int> > v;
    int n;
    int x,y;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x >> y;
        v.push_back(make_pair((x+y),i+1));
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout << v[i].second << " ";
    }
}