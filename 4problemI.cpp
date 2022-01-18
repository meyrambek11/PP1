#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int n,m,k;
    int sum = 0;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            k = sqrt(a[i][j]);
           if(k*k == (a[i][j])){
               a[i][j] = k;
               }    
        }
        
    }    
    for(int i=0;i<n;++i){
     for(int j=0;j<m;++j)
        cout << a[i][j] << " ";
        cout << endl;
    }
    return 0;
    
        
}