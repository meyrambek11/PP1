#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n,l,r,k,sum;
    cin >> n;
    cin >> l;
    cin >> r;
    for(int i=0;i<n-2;i++){
        cin >> k;
        v.push_back(l+r+k);
        l = r;
        r = k;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        sum = v[0];
    }
    cout << sum;

}