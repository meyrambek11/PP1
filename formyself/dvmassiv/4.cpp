#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("output.txt","w",stdout);
    int n,cnt = 1;
    int a[n][n];
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if((i+j) == n-1){
               cout << cnt++;
           }
           else{
               cout << ".";
           }
        }
        cout << endl;
    }
}