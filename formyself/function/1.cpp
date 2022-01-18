#include <bits/stdc++.h>
using namespace std;
void f(int k,int n,int cnt){
    if(k == n){
        cnt++;
    }
    cout << cnt;
}
int main(){
    int n;
    int a[n],b[n];
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    for(int j=0;j<n;j++){
        cin >> b[j];
    }
    for(int i=0;i<n;i++){
        f(b[i],a[i],0);
    }
}