#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n,m;
    cin >> n >> m;
    int k = abs(m-n);
    int l = abs(360 - k);
    if(k >= l){
        cout << l;
    }
    else 
    cout << k;
    return 0;
}