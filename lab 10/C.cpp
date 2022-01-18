#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    vector<int> q;
    int n , m;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> m;
        v.push_back(m);
        q.push_back(m);
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(q[i] == v[i]){
            cout << "OK" << endl;
        }
        else
        cout << "Instead of " << q[i] << " here was " << v[i] << endl;
    }
}