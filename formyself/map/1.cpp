#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    vector<pair<int, int> > v;
    int n,x,y;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }
    for(int j=0;j<v.size();j++){
        if(v[j-1].first > v[j].first){
            swap(v[j-1].first,v[j].first);
            swap(v[j-1].second,v[j].second);
        }
        else if(v[j-1].first == v[j].first){
            if(v[j-1].second > v[j].second){
                swap(v[j-1].first,v[j].first);
                swap(v[j-1].second,v[j].second);
            }
        }
    }
    for(int i=0;i<v.size();i++){
        cout << v[i].first << " " << v[i].second << endl;
    }

}