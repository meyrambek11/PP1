#include <iostream>
using namespace std;
int f(int n, int m, int x){
    int k;
    k = (n+m)%x;
    return k;
}
int main(){
    int n,m,x;
    cin >> n >> m >> x;
    cout << f(n,m,x);
    return 0;
}