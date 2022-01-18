#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n,x,cnt = 0,sum = 0,add = 0;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
    }
    for(int i=0;i<v.size();i++){
        if(v[i]%2 == 0){
            cnt++;
        }
        if(v[i]%3 == 0){
            sum++;
        }
        if(v[i]%4 == 0){
            add++;
        }
    }
    cout << cnt << " " << sum << " " << add;
    
}