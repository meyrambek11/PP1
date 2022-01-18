#include <bits/stdc++.h>
using namespace std;

bool f(int n){
    if(n == 0) return false;
    if(n== 1) return false;
    if(n == -1) return false;
    for(int i=2;i<(abs(n));i++){
        if(abs(n)%i == 0){
            return false;
        }
    }
    return true;
}
int main(){
    vector <int> v;
    int n,m;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> m;
        if(f(m) == true){
            v.push_back(m);
        }
    }
    cout << v.size();
}