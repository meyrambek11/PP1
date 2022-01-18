#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n,k;
    int x;
    cin >> n>>k;
    for(int i = 0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.begin()+k-1);
    sort(v.begin()+k,v.end());
    reverse(v.begin()+k,v.end());
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    

}