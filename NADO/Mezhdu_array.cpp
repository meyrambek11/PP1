#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n;
    int l,r;
    cin >> n;
    cin >> l;
    for(int i=0;i<n-1;i++){
        cin >> r;
        v.push_back(abs(r-l));
        l = r;
    }
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }

}