#include <bits/stdc++.h>
using namespace std;
int main(){
    double G = 6.67*(1e+23);
    double m1,m2,r;
    cin >> m1 >> m2 >> r;
    double F = (G*m1*m2)/(r*r);
    cout << F << endl;
    return 0;
}