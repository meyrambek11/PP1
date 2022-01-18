#include <bits/stdc++.h>
using namespace std;
bool f(vector<int> v ,int l,int r){
    if (l>=r) return true;
    if(v[l] == v[r]) return f(v,l+1,r-1);
    
    return false;
}
int main(){
    vector<int> v;
    vector<int> q;
    int cnt = 0;
    if(f(v,0,v.size()-1) == true){
        cnt++;
    }
    if(f(q,0,q.size()-1) == true){
        cnt++;
    }
    if(cnt == 2){
        cout << "YES";
    }
    else
    cout << "NO";
    
}
