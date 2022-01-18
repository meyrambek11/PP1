#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    vector<int> v;
    vector<int> s;
    int n;
    cin >> n;
    int x,m,k,l;
    for(int i = 0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    cin >> m;
    cin >> k >> l;
    
    v.erase(v.begin()+m-1);
    for(int i = 0;i< v.size();i++){
        s.push_back(v[i]);    
    }
    s.erase((s.begin()+k)-1,(s.begin()+l));
    for(int i = 0;i<s.size();i++){
        cout << s[i] << " ";
    }
    
}