#include <iostream>
using namespace std;
int k,l,a[1000][1000];
void f(int n, int m){
    for(int i=0;i<m;++i){
        for(int j=0;j<n;++j){
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
}
int main(){
    cin >> k >>l;
    for(int i=0;i<k;++i){
        for(int j=0;j<l;++j){
            cin >> a[i][j];
        }
    }
    f(k,l);
    return 0;
}