#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    pair<int, int> v[100000];
    int n;
    cin >> n;
    for(int i=0; i<n;i++){
        cin >> v[i].first >> v[i].second;
    }
    sort(v,v+n);
    for(int i=0;i<n;i++){
        cout << v[i].first << " " << v[i].second << endl;
    }
    return 0;
}