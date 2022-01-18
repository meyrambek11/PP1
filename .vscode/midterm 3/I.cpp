#include <iostream>
using namespace std;
int main(){
    int n,m,k = -1e+6,l = -1e+6;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> a[n][m];
        }
    } 
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << a[i][j] << endl;
        }
    } 
    

    
    return 0;
    
}