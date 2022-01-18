#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y,z;
    cin >> x >> y >> z;
    if(x%y == 0 && y%z == 0){
        cout << x+1 << " " << y+1 << " " << z+1;
    }
    else
    cout << 0 << " " << 0 << " " << 0;
}