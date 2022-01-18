#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    int a[n][n];
    cin >> n;
    for(int i=0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(i == n-1 || j == 0){
                cout << 1 << " ";
            }
            else
            cout << 0 << " ";
        }
        cout << endl;
    } 
}