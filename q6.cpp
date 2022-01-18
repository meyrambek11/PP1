#include <iostream>
#include <cmath>

using namespace std;

int main (){
    int L;
    double pi=(3.14159265359),S,R;
    cin >> L;
    R=L/(2*pi);
    S = pi*R*R;
    cout << S << endl;
    return 0;
}