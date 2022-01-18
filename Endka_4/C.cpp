#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int n,m,cnt = 0;
    int l,r;
    cin >> m;
    cin >> n;
    cin >> l;
    for(int i=0;i<n-1;i++){
        cin >> r;
        cnt = cnt + (abs(r-l));
        l = r;
    }
    if(cnt <= m){
        cout << "YES";
    }
    else
    cout << "NO";

}