#include <bits/stdc++.h>
using namespace std;
int main(){
  map<int,int> m;
  vector<int> v;
  map<int, int> :: iterator it;
    int n,x,cnt;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        m[x]++;
    }
    for(it = m.begin();it != m.end();it++){
        v.push_back(it->second);
    }
    for(int i=0;i<v.size();i++){
        if(v.size() == 1){
            cnt =  v[0];
        }
        else
        cnt = v[1];
    }
    cout << cnt;
    
       
}