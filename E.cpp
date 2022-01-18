#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t, v, s;
    cin >> v >> t;

    s = (v*t);
    cout << s%109 << endl;
    return 0;
}