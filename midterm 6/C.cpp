#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    vector<int> q;
    int n,l = -(1e+6);
    int m;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> m;
        v.push_back(m);   
    }
    for(int i=0;i<v.size()-1;i++){
            q.push_back(v[i]+v[i+1]);   
    }  
    for(int j=0;j<q.size();j++){
        if(q[j] > l){
            l = q[j];
        }
    } 
    cout << l;
}