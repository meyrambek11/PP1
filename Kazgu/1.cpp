#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<string> v;
    vector<string> q;
    string s;
    for(int i=0;i<2;i++){
        cin >> s;
        v.push_back(s);
    }
     for(int j=0;j<2;j++){
        cin >> s;
        q.push_back(s);
    }
    reverse(v.begin(),v.end());
    reverse(q.begin(),q.end());
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    cout << endl;
    for(int i=0;i<q.size();i++){
        cout << q[i] << " ";
    }

    return 0;
}