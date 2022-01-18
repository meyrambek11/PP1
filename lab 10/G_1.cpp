#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    vector<int> q;
    int n,x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    for(int x=0;x<v.size();x++){
    for(int i=0;i<v.size()-1;i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i] == v[j]){
                v.erase(v.begin()+j);
            }
        }
    }
    }
    for(int i=0;i<v.size();i++){
        q.push_back(v[i]);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout << v[i] << " x " << q[i] << " = " << v[i]*q[i] << endl;
    }
}