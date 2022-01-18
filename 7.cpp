#include <iostream>
using namespace std;
int n,m,k;
int f(int a[]){
    int maxi = -1e+6;
    for(int i=1;i<=3;++i){
        maxi = max(maxi, a[i]);
    }
    return maxi;
}
int main(){
    int a[4];
    for(int i=1;i<=3;++i){
        cin >> a[i];
    }
    cout << f(a);
    return 0;
}