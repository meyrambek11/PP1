#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n,m;
    int l,r;
    cin >> n;
    cin >> l;
    for(int i=0;i<n-1;i++){
        cin >> r;
        v.push_back((r+l));
        l = r;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        m = v[0];    
    }
    cout << v[0];

}