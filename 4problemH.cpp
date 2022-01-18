#include <iostream>

using namespace std;

int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int m,n,sum=0,mini=1e+6;
    int k;
    cin >> n >> m;
    int a[n][m];
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;++i){
        for(int j=0;j<m;++j)
            sum = sum + a[i][j];
            if(sum < mini){
                mini = sum;
                k = i;
            }
            sum = 0;
                
    }
    cout << k+1;
    return 0;

}