#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin >> n;
    int x = sqrt(n);
    int s=x;
    if(s*s == n)
     cout << "Yes" << endl;
    else
     cout << "No" << endl;
    return 0;
}