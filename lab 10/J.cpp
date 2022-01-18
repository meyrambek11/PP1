#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n;
    cin >> n;
    for(int i = 0;i<n+1;i++){
        v.push_back(i);
    }
    for(int j=0;j<v.size();j++){
        long long x = pow(v[j],j);
        cout << x << " ";
    }
}