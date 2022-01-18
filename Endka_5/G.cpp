#include <bits/stdc++.h>
using namespace std;
int main(){
    double a,b,c;
    cin >> a >> b >> c;
    double P = (a+b+c)/2;
    double S = sqrt((P*(P-a)*(P-b)*(P-c)));
    cout << fixed << setprecision(2) << S << endl;
    return 0;

    
}