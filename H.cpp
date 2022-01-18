#include <iostream>
#include <cmath>
#include <stdlib.h>
using namespace std;
//n*((2*n+1)%2);
int main (){
    int v,t,s;
    cin >> v >> t;
    s = (v*t)%109;
    cout << (s + 109)%109;
}