#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<char> v;
    vector<char> q;
    int cnt = 0;
    string s;
    string c;
    cin >> s;
    cin >> c;
    for(int i=0;i<s.size();i++){
        v.push_back(s[i]);
    }
    for(int j=0;j<c.size();j++){
        q.push_back(c[j]);
    }
    sort(v.begin(),v.end());
    sort(q.begin(),q.end());
    if(v == q){
        cout << "YES";
    }
    else 
    cout << "NO";


}