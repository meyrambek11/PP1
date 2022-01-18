#include <bits/stdc++.h>
using namespace std;
int main(){
    int x,y;
    cin >> x >> y;
    if(x%2 == 0 && y%2 == 0){
        cout << x+1 << " " << y+1 << endl;
    }
    else if(x%2 == 0 || y%2 == 0){
        cout << x*y << endl;
    }
    else
    cout << x << " " << y << endl;
}