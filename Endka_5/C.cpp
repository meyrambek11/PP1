#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,m,sum = 0;
    cin >> n >> m;
    int a[m];
    for(int i=0;i<m;i++){
        cin >> a[i];
    }
    for(int i=0;i<m;i++){
        sum = sum + a[i];
    }
    if(sum <= n){
        cout << "YES";
    }
    else
    cout << "NO";

}