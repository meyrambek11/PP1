#include <bits/stdc++.h>
using namespace std;
bool f(vector<int> v ,int l,int r){
    if (l>=r) return true;
    if(v[l] == v[r]) return f(v,l+1,r-1);
    
    return false;
}
int main(){
    //freopen("input.txt", "r", stdin);
    //+freopen("output.txt", "w", stdout);
    vector<int> v;
    vector<int> q;
    int n,cnt = 0;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j){
                v.push_back(a[i][j]);
            }
            else if((i+j) == (n-1)){
                q.push_back(a[i][j]);
            }
        }
    }
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