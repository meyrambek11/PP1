#include <bits/stdc++.h>
using namespace std;
int main(){
    map<int, int> m;
    int n,x,maxi = -1000000,y;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        m[x] = x;
    }
    map<int, int> :: iterator it;
    for(it = m.begin();it != m.end();it++){
        if(it->second > maxi){
            maxi = it->second;
            y = it->first;
        }
    }
    cout << y;
}