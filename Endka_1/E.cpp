#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n,maxi = 0;
    int a[n];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int i=0;i<n;i++){
        if(i%2 == 0){
            v.push_back(a[i] - a[i-1]);
        }
    }
    if(v.size() == 1){
        cout << 0;
    }
    else{
      for(int i=1;i<v.size();i++){
        if(v[i] > maxi){
            maxi = v[i];
        }
      }
      cout << maxi;
    }
    return 0;
}