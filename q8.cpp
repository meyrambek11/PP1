#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int a,b,c,d;
    double m;
    cin >> a >> b >> c >> d;
    m = sqrt((c-a)*(c-a) + (d-b)*(d-b));
    cout << m << endl;
    return 0;
}