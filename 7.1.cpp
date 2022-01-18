#include <iostream>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int a[n][m];
    /*for(int i=0;i<n;++i){
        a[0][i] = a[i][0];
     }*/
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            if((i+j)%2 == 0){
                a[i][j] = 1;
            }
            else if((i+j)%2 == 1){
                a[i][j] = 0;
            }
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cout << a[i][j];
        }
        cout << endl;
    }
    return 0;
    
}