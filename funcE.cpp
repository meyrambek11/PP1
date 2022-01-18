#include <iostream>
#include <sstream>
#include <cmath>
#include <algorithm>
using namespace std;
int f(int a[], int n){
    int m = a[0];
    for(int i = 1; i < n; ++i){
        m = max(m, a[i]);
    }
    return m;
}
int main(){
     int n;
     cin >> n;
     int a[n];
     for(int i = 0; i < n; ++i){
         cin >> a[i];
     }
     cout << f(a, n);
    return 0;
}