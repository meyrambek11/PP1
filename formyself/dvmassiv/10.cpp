#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n,cnt = 0,maxi=-1000000;
    int x,y;
    cin >> n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }      
    }
    for(int i=0;i<n;i++){
       for(int j=0;j<n;j++){
           if(i == j){
               if(a[i][j] > maxi){
                   maxi = a[i][j];
                   x = i;
                   y = j;
               }
           }
       } 
    }
    cout << "Maximum element is: " << maxi << " with" << endl;
    cout << "coordinates: " << x+1 << ";" << y+1;
    
}