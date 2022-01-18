#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n,m;
    int x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    cin >> m;
    rotate(v.begin(),v.begin()+m+1,v.end());
    for(int i=0;i<v.size();i++){
        if(i < m){
            v[i] = 0;
        }
        cout << v[i] << " ";
    }
}