#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    vector<char> v;
    int k;
    string s;
    getline(cin,s);
    cin >> k;
    
    for(int i=0;i<s.size();i++){
        v.push_back(s[i]);
    }
    v.erase(v.begin(),v.begin()+k);
    for(int i=0;i<v.size();i++){
        cout << v[i];
    }
}