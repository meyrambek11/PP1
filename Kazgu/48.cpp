#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    vector<int> q;
    int n;
    while(cin >> n){
        if(n<0)break;
        v.push_back(n);
        q.push_back(n);
    }
    sort(v.begin(),v.end());
    if(q == v){
        cout << "Sandar osu retimen ornalaskan" << endl;
    }
    else
    cout << "Sandar osu retimen ornalaspagan" << endl;
}