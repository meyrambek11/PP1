#include <bits/stdc++.h>
using namespace std;

bool f(int k){
    for(int i=2;i<k;i++){
        if(i*i == k){
          return true;
        }  
    }
    return false;
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m;
    int x;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }      
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(f(a[i][j]) == true){
                cout << sqrt(a[i][j]) << " ";
            }
            else
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}