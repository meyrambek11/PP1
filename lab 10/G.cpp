#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    set<int> s;
    set<int> :: iterator at;
    vector<int> v;
    vector<int> q;
    vector<int> d;
    int n,x;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x;
        v.push_back(x);
        s.insert(x);    
    }
    vector<int> :: iterator ll;
    ll = unique(v.begin(),v.end());
    vector<int> :: iterator it;
    
    for(it = v.begin();it != ll;it++){
       // q.push_back(*it);
    }   
    /*for(at = s.begin();at != s.end();at++){
        d.push_back(*at);
    }
    for(int i=0;i<d.size();i++){
        for(int j=0;j<q.size();j++){
            if(i == j){
                cout << d[i] << " x " << q[j] << " = " << d[i]*q[j] << endl;
            }
        }
    }*/
   
    
    
    return 0;
}