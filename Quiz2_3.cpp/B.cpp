#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    vector<int> q;
    int n,cnt = 0;
    int k,x;
    cin >> n >> k;
    for(int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            q.push_back(v[i]+v[j]);
        }
    }
    for(int i=0;i<q.size();i++){
        if(q[i] == k){
            cnt++;
        }
    }
    if(cnt != 0){
        cout << "YES";
    }
    else
    cout << "NO";
}