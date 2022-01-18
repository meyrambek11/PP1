#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int n,x,maxi = -1;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    if(v.size() == 2){
        cout << 0;
    }
    else{
        for(int i=1;i<v.size();i++){
            if(i%2 == 0){
                maxi = max(maxi,v[i]-v[i-1]);
            }
        }
        cout << maxi;
    }
    
}