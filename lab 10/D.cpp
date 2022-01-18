#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n,m,x;
    cin >> n >> m;
    for(int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    rotate(v.begin(),v.begin()+m,v.end());
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
}