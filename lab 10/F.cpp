#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,sum = 0;
    cin >> n;
    int s = ((n+1)*n)/2;
    vector<int> v(s);
    for(int i=1;i<=n;i++){
        fill(v.begin()+sum,v.begin()+sum+i,i);
        sum = sum + i;
    }
    for(int i=0;i<v.size();i++){
        cout << v[i] << " ";
    }
    
}