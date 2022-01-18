#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n,k,h;
    cin >> n >> k;
    for(int i=1;i<=n;i++){
        if(n%i == 0){
            v.push_back(i);
        }
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        h = v[k-1];   
    }
    cout << h;
}