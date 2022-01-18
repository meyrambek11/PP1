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
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
            cnt = cnt + a[i][j];
            if(cnt < mini){
                mini = cnt;
                x = i;
            }
            cnt=0;
    }
    cout << mini << endl;
    cout << x+1;
}