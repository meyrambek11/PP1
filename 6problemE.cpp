#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double real(int n, int m){
    double x = sqrt((n*n) + (m*m));
    return x;
}
int main(){
    int n,m;
    cin >> n >> m;
    cout << setprecision(4) << real(n, m);
    return 0;
}