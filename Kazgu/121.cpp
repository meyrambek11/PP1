#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    int a[10][10];
    int k,l;
    cin >> k >> l;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(i + 1 == k ){
                k = l;
            }
            if(i + 1 == l){
                l = k;
            }
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}