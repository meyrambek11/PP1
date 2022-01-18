#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v;
    set<int> s;
    int n,m,cnt = 0,l;
    cin >> n;
    for(int i = 0;i<n;i++){
        cin >> m;
        v.push_back(m);
    }
    sort(v.begin(),v.end());
    for(int i = 0;i<v.size();i++){
        if(v[i] == v[i+1]){
           s.insert(v[i]); 
        }
    }
    cout << s.size();
    return 0;
}

