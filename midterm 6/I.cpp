#include <iostream>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    int n,m;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin >> a[i][j];
        }
    }
   for(int j=m-1;j>=0;j--){
       for(int i=0;i<n;i++){
           cout << a[i][j] << " ";
       }
       cout << endl;
   }
}