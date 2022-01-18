#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,x=0;
    cin >> n >> m;
    for(int i=1;i<m;i++){
        x = x +  n*i;
        x = x*2;
    }
    cout << x;
}