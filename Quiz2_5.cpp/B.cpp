#include <bits/stdc++.h>
using namespace std;
bool f(int n){
    if(n == 0) return false;
    if(n == 1) return false;
    for(int i = 2;i<= sqrt(n);i++){
        if(n%i == 0) return true;
    }
    return false;
}
int main(){
    vector<int> v;
    set<int> q;
    set<int> :: iterator it;
    int n;
    while(cin >> n){
        if(f(n) == true){
            v.push_back(n);
        }
    }
    for(int i = 0;i<v.size()-1;i++){
        for(int j = i+1;j<v.size();j++){
            if(v[i] == v[j]){
                q.insert(v[i]);
            }
        }  
    }
    for(it = q.begin();it != q.end();it++){
        cout << *it << " ";
    }
}



