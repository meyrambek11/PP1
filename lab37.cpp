#include <iostream>

using namespace std;

int main () {
    int n;
    cin >> n;
    int a[500500];
    int mx = -(1 << 30),nx = (1 << 30);
    for (int i=1; i<=n; ++i){
        cin >> a[i];}
    for(int i=1; i<=n; ++i){
        if (a[i]>mx)
         mx = a[i];
        if (a[i]<nx)
         nx = a[i];
        }
    for(int i = 1; i<=n; ++i)
        if (a[i] == mx) 
         a[i] = nx;
    for(int i = 1; i <= n; ++i)
    cout << a[i] << " ";
    return 0;
}