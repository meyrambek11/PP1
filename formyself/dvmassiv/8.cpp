#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,m,cnt = 0,mini = 1000000;
    int x;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[i][j];
        }      
    }
    cout << "coordinates of min elements:" << endl;
    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            if(a[i][j] < mini){
               mini = a[i][j];
               x = i;
            }
        }
        cnt = cnt + mini;
        cout << x+1 << ";" << j+1  << endl;
        mini = 1000000;
    }
    cout << "Their sum:" << endl;
    cout << cnt;
    
}