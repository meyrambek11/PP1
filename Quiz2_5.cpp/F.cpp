#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    vector<int> q;
    int n;
    while(cin >> n){
        if(n == 0){
            v.push_back(n);
        }
        else
        q.push_back(n);
    }
    for(int i=0;i<q.size();i++){
        cout << q[i] << " ";
    }
    for(int j=0;j<v.size();j++){
        cout << v[j] << " ";
    }
    return 0;
}