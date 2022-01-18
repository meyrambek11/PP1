#include <bits/stdc++.h>
using namespace std;
int main(){
   freopen("input.txt", "r", stdin);
   freopen("output.txt", "w", stdout);
    int a[10][10],mini = 1000000, maxi = -1000000,k,l;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            if(i == j){
                if(a[i][j] < mini){
                    mini = a[i][j];
                }
            }
            if((i+j) == 9){
                if(a[i][j] > maxi){
                    maxi = a[i][j];
                }
            }
        }
    }
    cout << mini << " " << maxi;
    
}