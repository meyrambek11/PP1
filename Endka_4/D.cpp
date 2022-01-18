#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v;
    int t,n,sum = 1;
    int x;
    cin >> t >> n;
    while(n>0){
        sum = sum*2;
        x = t*sum;
        v.push_back(x);
        n = n-1;      
    }
    cout << v[v.size()-1] << endl;

}